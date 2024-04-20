#include <iostream>
#include <string >
#include <conio.h>
#include <Windows.h>
using namespace std;

//constant 
#define NUM_OF_TEACH 2
#define NUM_OF_STUD 1
#define NUM_OF_SUB 2
#define NUM_OF_EXAM 2
#define NUM_OF_QUESTIONS 3  
#define NUM_OF_OPTIONS 4    
							
// global variables
int user;                 //index for active user  on the system

//struct
struct TIME
{
	int hours, min, sec;
};
struct EXAM
{
	string exam_name;
	TIME time = {0,0,0};
	int grade;
	string examText[NUM_OF_QUESTIONS][NUM_OF_OPTIONS];
	short examAnswer[NUM_OF_QUESTIONS];
};
struct Subjects
{
	string course_code;
	string course_name;
	EXAM test[NUM_OF_EXAM];
};
struct Question_Bank
{
	string Question[NUM_OF_QUESTIONS][NUM_OF_OPTIONS];   //maximum 6 question/
	short Correct_ans[NUM_OF_QUESTIONS];                // 3 option & 1 for the entered question
};
struct Teacher
{
	string Username, correctpassword;
	Subjects course;              //course[0] for teach[0],course[1] for teach[1]       
	Question_Bank qeus_bank;    
}teacher[NUM_OF_TEACH];
struct Student
{
	string Username, correctpassword;
	int ID_student;
	Subjects course[NUM_OF_SUB];   //student will choose  course[] -> exam for this sub
}stud;


//function declaration
 
//initialise functions
void init();

//sign in functions
bool sign_in();
void check_user();

//teacher functions
int main_menu_teacher();
void handle_teacher();
void profile_teach();
// exam functions
void questions_bank();
void display_question(string Question[][NUM_OF_OPTIONS], short Correct_ans[]);
void Add();
void Delete(short dele_ques);
void edit();
void edit_Exam();
void display_pre_exam();
void time(short index_test);
void Select_ques(short selected_ques[NUM_OF_QUESTIONS], short index_test);
void Creat_new_test();

//student functions
int main_menu_stud();
void handle_student();
void profile_stud();
void select_course();
void view_grades();
bool timer(short index_test);



int main()
{
	init();
	if (sign_in())
		check_user();

	return 0;
}

void init()
{
	teacher[0] = { "Lina","123abc" };
	teacher[0].course.course_name = "Structured programming";
	teacher[0].course.course_code = "cis260";
	teacher[1] = { "Maha","0000" };
	teacher[1].course.course_name = "History";
	teacher[1].course.course_code = "HIST101";
	stud.ID_student = 2023170;
	stud = {"Aya","2004" };

	teacher[1].qeus_bank.Question[0][0] = "What is the capital of Egypt?";
	teacher[1].qeus_bank.Question[0][1] = "Damascus";
	teacher[1].qeus_bank.Question[0][2] = "Cairo";
	teacher[1].qeus_bank.Question[0][3] = "Giza";
	teacher[1].qeus_bank.Correct_ans[0] =  2;
	teacher[1].qeus_bank.Question[1][0] = "When did the 6th October war happen?";
	teacher[1].qeus_bank.Question[1][1] = "1970";
	teacher[1].qeus_bank.Question[1][2] = "1957";
	teacher[1].qeus_bank.Question[1][3] = "1973";
	teacher[1].qeus_bank.Correct_ans[1] = 3;

}

bool sign_in()
{

	string username, password;
	int trials = 3;
	bool verified = false;

	do
	{

		cout << "\n\t\t ******* Online Exam System *******\n";
		cout << "\t\t-------------------------------------\n\n";
		cout << "   username:\t\t";
		cin >> username;
		cout << "   password:\t\t";
		char pass;
		while ((pass = _getch()) != '\r')
			if (pass == '\b')
			{
				if (!password.empty())
				{
					cout << "\b \b";
					password.pop_back();
					cout.flush();
				}
			}
			else

			{
				cout << "*";
				password += pass;

			}
		cout << endl;

		for (int i = 0; i < NUM_OF_TEACH; ++i)
		{
			if (username == teacher[i].Username && password == teacher[i].correctpassword)
			{
				cout << "  login successfully\n";
				cout << "  Welcome back " << teacher[i].Username << endl;
				user = i ; 
				verified = true;
				break;
			}
		}
		for (int i = 0; i < NUM_OF_STUD; ++i)
		{
			if (!verified && username == stud.Username && password == stud.correctpassword)
			{
				cout << " login successfully\n";
				cout << "  Welcome back " << stud.Username << endl;
				user = NUM_OF_TEACH+1;
				verified = true;
			}
		}
		 if (!verified)
		{
			cout << " incorrect password or username\n ";
			verified = false;
			trials--;
			password.clear();
		}

		if (verified)
			return true;



	} while (!verified && trials > 0);


	cout << " You have reached the maximum number of trials, please try again \n";
	return false;


}
void check_user()
{

	if (user < NUM_OF_TEACH)
		handle_teacher();
	else
		handle_student();
}

int main_menu_teacher()
{
	int choice;
	cout << "Press\n"
		<< "1 --> My Profile\n" //username, password, course code 
		<< "2 --> Question Bank\n" // add, delete all questions in one place 
		<< "3 --> Create New Test\n" //generate time for test, add questions to test
		<< "4 --> Edit Existing Test\n" //add questions, remove questions, edit test time
		<< "5 --> View Students Grades\n" // username stud, test name/num ,grade
		<< "6 --> Logout :(\n"; //directed to login page
	cin >> choice;
	return choice;
}
int main_menu_stud()
{
	int choice;
	cout << "Press...\n"
		<< "1 --> My Profile\n" //username, password, course code, id
		<< "2 --> Select Course\n" // select course --> course name & course code 
		<< "3 --> Select Test\n" //select course --> select test --> answer it (limited time) --> submit
		<< "4 --> View My Grades\n" // see all grades --> see grades for all subjects, course code --> see grades for just one subject
		<< "5 --> Logout :(\n"; //directed to login page
	cin >> choice;
	return choice;
}

void handle_teacher()
{
	char ans;
	int choice;

	do
	{
		choice = main_menu_teacher();
		switch (choice)
		{
		case 1:
			profile_teach();
			break;
		case 2:
			questions_bank();
			break;
		case 3:
			Creat_new_test();
			break;
		case 4:
			edit_Exam();
			break;
		case 5:
			break;
		case 6:
			sign_in();
			check_user();
			ans = 'y';
			continue;
		default:
			cout << "invalid choice please choose from 1 to 6\n";
			ans = 'y';
			continue;
		}
		cout << "Another choice? (y/n)\n";
		cin >> ans;
	} while (ans == 'Y' || ans == 'y');
	cout << "Thank you for using our system :)\n";
}
void handle_student()
{
	int choice;
	char ans;

	do
	{
		choice = main_menu_stud();
		switch (choice)
		{
		case 1:
			profile_stud();
			break;
		case 2:
			select_course();
			break;
		case 3:
			break;
		case 4:
			view_grades();
			break;
		case 5:
			sign_in();
			check_user();
			ans = 'y';
			continue;
		default:
			cout << "invalid choice please choose from 1 to 5\n";
			ans = 'y';
			continue;
		}
		cout << "Another choice? (y/n)\n";
		cin >> ans;
	} while (ans == 'y' || ans == 'Y');
	cout << "Thank you for using our system :)\n";
}


void profile_teach()
{
	cout << " Username :\t\t" << teacher[user].Username << endl;
	cout << " Password :\t\t" << teacher[user].correctpassword << endl;
	cout << " Course Code :\t\t" << teacher[user].course.course_code << endl;

}
void profile_stud()
{
	cout << " ID:\t\t" << stud.ID_student << endl;
	cout << " Username :\t\t" << stud.Username << endl;
	cout << " Password :\t\t" << stud.correctpassword << endl;
	for (int i = 0; i < NUM_OF_SUB; i++)
		if (!stud.course[i].course_name.empty())
			cout << " Course Name:\t\t" << stud.course[i].course_name <<
			"\t\t" << stud.course[i].course_code << endl;


}

void select_course()
{
	int choice;
	char ans;
	do
	{
		cout << "Press\n";
		for (int i = 0; i < NUM_OF_SUB; i++)
			cout << i + 1 << " --> " << teacher[i].course.course_name <<
			"\t" << teacher[i].course.course_code << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			stud.course[0].course_name = "Structured programming";
			break;
		case 2:
			stud.course[1].course_name = "History";
			break;
		default:
			cout << "invalid choice please choose 1 or 2\n";
			ans = 'y';
			continue;
		}
		cout << "Another course? (y/n)\n";
		cin >> ans;
	} while (ans == 'y' || ans == 'Y');

}

void view_grades()
{
	int choice;
	char ans;
	do
	{
		cout << "Press\n"
			<< "1 --> View All Your Grades\n"
			<< "2 --> View Structured Programming grade\n"
			<< "3 --> View History grade\n";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Course Name \t\t Course Code \t\t Test Name \t\t Your Grade\n";
			for (int i = 0; i < 2; i++)
				if (!stud.course[0].course_name.empty())
					cout << stud.course[0].course_name <<
					"\t\t" << teacher[i].course.course_code << "\t\t" <<
					stud.course[i].test[i].grade << endl;
			break;
		case 2:
			cout << "Course Name \t\t Course Code \t\t Test Name \t\t Your Grade\n";
			cout << teacher[0].course.course_name << "\t\t" <<
				teacher[0].course.course_code << "\t\t" <<
				endl;//باقي نضيف اسامي الامتحانات والدرجات في لووب
			break;
		case 3:
			cout << "Course Name \t\t Course Code \t\t Test Name \t\t Your Grade\n";
			cout << teacher[1].course.course_name << "\t\t" <<
				teacher[1].course.course_code << "\t\t" <<
				endl; //باقي نضيف اسامي الامتحانات والدرجات في لووب
			break;
		default:
			cout << "Invalid choice, please choose from 1 to 3";
			ans = 'y';
			continue;
		}
		cout << "Do you want to choose another viewing option? (y/n)\n";
		cin >> ans;
	} while (ans == 'y' || ans == 'Y');
}

void questions_bank()
{
	char ans;
	short choice;

	// اقصى عدد اسئله ممكن أضافتها  6 اسئله
	/* exist_Exam.examText[0] = "What is the capital of Egypt?\n";
    exist_Exam.examText[1] = "What is the area of Egypt?\n";
    exist_Exam.examText[2] = "How many governments in Egypt?\n";
    exist_Exam.examText[3] = "When is the 6th October war?\n";
    exist_Exam.examAnswer[0] = "Cairo\n";
    exist_Exam.examAnswer[1] = "98 km2\n";
    exist_Exam.examAnswer[2] = "27\n";
    exist_Exam.examAnswer[3] = "1973\n";
   */
	display_question(teacher[user].qeus_bank.Question,teacher[user].qeus_bank.Correct_ans);
	do 
	{
		cout << "Press\n"
			<< "1--> Add New Question\n"
			<< "2-->Edit Question\n"
			<< "3-->Delete Question\n"
			<< "4-->Cancel\n";
		cin >> choice;
		switch (choice)
		{case 1:
			Add();
			display_question(teacher[user].qeus_bank.Question, teacher[user].qeus_bank.Correct_ans);
			break;
		case 2:
			edit();
		    break;
		case 3:
		{
			short dele_ques;
			if (!teacher[user].qeus_bank.Question[0][0].empty()) //if the first question is empty,it means that there are no any questions
			{
				cout << "Please Enter number of question to delete it \n";
				cin >> dele_ques;
				Delete(dele_ques);
				display_question(teacher[user].qeus_bank.Question, teacher[user].qeus_bank.Correct_ans);
			}
			else
				cout << "There is no questions to delete \n\n";

		}
			break;
		case 4:
			ans = 'n';
			continue;
		default:
			cout << "invalid choice please choose from 1 to 4\n";
			ans = 'y';
			continue;
		}
		cout << "Another Edit? (y/n)\n";
		cin >> ans;
	} while (ans == 'y' || ans == 'Y');


	
}
void display_question(string Question[][NUM_OF_OPTIONS],short Correct_ans[])
{
	if (Question[0][0].empty())
		cout << " There is no any Question\n\n";

	else
	{
		for (int i = 0; i < NUM_OF_QUESTIONS && !Question[i][0].empty(); i++)  //& row is full
		{
			
			
			cout << i + 1 << "-->" << Question[i][0] << endl;

			for (int j = 1; j < NUM_OF_OPTIONS; j++)
			{
				cout << j << "- " << Question[i][j] << "\t\t";

			}
			cout << endl << endl;
			cout << "The index of the Correct answer is :" << Correct_ans[i] << "\n\n";
			

		}
	}


}// this function will display any group of questions as long as the number of questions doesn't exceed NUM_OF_QUESTIONS
void Add()
{
	int empty_raw = -1;
	for (int i = 0; i < NUM_OF_QUESTIONS; i++)
	{
		if (teacher[user].qeus_bank.Question[i][0].empty())
		{
			empty_raw = i;
			break;
		}

	}
	if (empty_raw != -1)
	{
		cout << "Type the new question\n";
		cin.ignore();  //It ignores any remaining characters (typically \n) in the buffer after reading with cin
		getline(cin, teacher[user].qeus_bank.Question[empty_raw][0]);
		cout << "Type the options\n";
		for (int j = 1; j < NUM_OF_OPTIONS; j++)
		{
			getline(cin, teacher[user].qeus_bank.Question[empty_raw][j]);
		}
		cout << "Type the index of the correct answer\n";
		 cin>>teacher[user].qeus_bank.Correct_ans[empty_raw];
	}
	else
	{
		cout << "\n No empty slots available to add new question.\n\n";
		Sleep(2000);
	}
}
void Delete( short dele_ques)
{
	if (dele_ques <= NUM_OF_QUESTIONS)
	{
		for (int j = 0; j < NUM_OF_OPTIONS; j++)
			teacher[user].qeus_bank.Question[dele_ques - 1][j].clear();
		teacher[user].qeus_bank.Correct_ans[dele_ques - 1] = NULL;
		for (int i = dele_ques; i < NUM_OF_QUESTIONS; i++)
		{
			for (int j = 0; j < NUM_OF_OPTIONS; j++)
			{
				teacher[user].qeus_bank.Question[i - 1][j] = teacher[user].qeus_bank.Question[i][j];
			}
			teacher[user].qeus_bank.Correct_ans[i - 1] = teacher[user].qeus_bank.Correct_ans[i];
		}
		for (int j = 0; j < NUM_OF_OPTIONS; j++)
			teacher[user].qeus_bank.Question[NUM_OF_QUESTIONS - 1][j].clear();
		teacher[user].qeus_bank.Correct_ans[NUM_OF_QUESTIONS - 1] = NULL;

	}
	else
		cout << "This question does not exist\n";

}
void edit()
{
	 short edit_ques;
	 if (!teacher[user].qeus_bank.Question[0][0].empty())
	 {
		 cout << "Please Enter number of question to edit it \n";
		 cin >> edit_ques;
		 for (int j = 0; j < NUM_OF_OPTIONS; j++)
			 teacher[user].qeus_bank.Question[edit_ques - 1][j]="";
		 teacher[user].qeus_bank.Correct_ans[edit_ques - 1]= NULL;
		 Add();
		 display_question(teacher[user].qeus_bank.Question, teacher[user].qeus_bank.Correct_ans);
	 }
	else
		cout << "There is no questions to edit \n\n";
}
void edit_Exam()
{
	
	display_pre_exam();
	
}
void display_pre_exam()
{
	short test_num ;
	if (!teacher[user].course.test[0].exam_name.empty()) // if test[0] is empty that means test[1 2 3 .....] is empty too
	{
		for (int i = 0; i < NUM_OF_EXAM; i++)
		{
			if (!teacher[user].course.test[i].exam_name.empty())
			{
				cout << i + 1 << "-" << teacher[user].course.test[i].exam_name<<endl;
			}
			else
				break;
		}
		cout << "Enter the test number to display it Or edit it \n";
		cin >> test_num;
		display_question(teacher[user ].course.test[test_num-1].examText, teacher[user].course.test[test_num - 1].examAnswer);
	}
	else
		cout << "There are no tests yet\n";

}
bool timer(short index_test)
{
	int hours = teacher[user].course.test[index_test].time.hours,
		min = teacher[user].course.test[index_test].time.min, 
		sec = teacher[user].course.test[index_test].time.sec;
		while (true )
	{
		system("cls");   //to clean the screen display and show the updated time 
		if (sec > 0)
		{
			sec--;
		}
		else {
			if (min > 0)
			{
				min--;
				sec = 59;
			}
			else
			{
				if (hours > 0)
				{
					hours--;
					min = 59;
					sec = 59;
				}
				else { break; }
			}
		}

		cout << hours << ":" << min << ":" << sec;

		Sleep(900); //to stop the program for 0.9 sec
	}
	cout << " time end :( " << endl;
	return true;

}
void time(short index_test)
{
	cout << "enter the exam time hours -> min -> sec" << endl;
	cin >> teacher[user].course.test[index_test].time.hours
		>> teacher[user].course.test[index_test].time.min
		>> teacher[user].course.test[index_test].time.sec;
	cout<< teacher[user].course.test[index_test].time.hours << " h : "
		<< teacher[user].course.test[index_test].time.min << " min : "
		<< teacher[user].course.test[index_test].time.sec <<" sec " << endl;

}
void Creat_new_test()
{
	short selected_ques[NUM_OF_QUESTIONS] = {};
	if (teacher[user].course.test[NUM_OF_EXAM - 1].exam_name != "")   //the last test is full
	
		cout << "\n No empty slots available to add new Exam.\n\n";
	else
	{
		if (!teacher[user].qeus_bank.Question[0][0].empty())
		{
			for (short index_test = 0; index_test < NUM_OF_EXAM; index_test++)
			{
				if (teacher[user].course.test[index_test].exam_name.empty())
				{
					cout << "Type the Exam name\n";
					cin >> teacher[user].course.test[index_test].exam_name;
					time(index_test);
					cout << "Enter the number of the selected questions\n";
					Sleep(300);
					display_question(teacher[user].qeus_bank.Question, teacher[user].qeus_bank.Correct_ans);
					for (int i = 0; i < NUM_OF_QUESTIONS; i++)
					{
						cin >> (selected_ques[i]);
						if (cin.peek() == '\n')
							break;
					}
					Select_ques(selected_ques, index_test);
					break;

				}

			}
		}
		else
			cout << "There are no questions to choose from \n";
	}

}

void Select_ques(short num_selected_ques[NUM_OF_QUESTIONS],short index_test)
{
	short index_selected_ques;
	for (int i = 0; i <= NUM_OF_QUESTIONS && num_selected_ques[i] > 0; i++)
	{
		index_selected_ques = num_selected_ques[i]-1;
		if (teacher[user].qeus_bank.Correct_ans[index_selected_ques]==NULL)
			continue;
		else
		{
			
				for (int j = 0; j < NUM_OF_OPTIONS; j++)
					teacher[user ].course.test[index_test].examText[i][j] = teacher[user].qeus_bank.Question[index_selected_ques][j];
				teacher[user].course.test[index_test].examAnswer[i] = teacher[user].qeus_bank.Correct_ans[index_selected_ques];

			
		}

	}
	cout << "done \n ";

}#include <iostream>
#include <string >
#include <conio.h>
#include <Windows.h>
using namespace std;

//constant 
#define NUM_OF_TEACH 2
#define NUM_OF_STUD 1
#define NUM_OF_SUB 2
#define NUM_OF_EXAM 2
#define NUM_OF_QUESTIONS 3  
#define NUM_OF_OPTIONS 4    
							
// global variables
int user;                 //index for active user  on the system

//struct
struct TIME
{
	int hours, min, sec;
};
struct EXAM
{
	string exam_name;
	TIME time = {0,0,0};
	int grade;
	string examText[NUM_OF_QUESTIONS][NUM_OF_OPTIONS];
	short examAnswer[NUM_OF_QUESTIONS];
};
struct Subjects
{
	string course_code;
	string course_name;
	EXAM test[NUM_OF_EXAM];
};
struct Question_Bank
{
	string Question[NUM_OF_QUESTIONS][NUM_OF_OPTIONS];   //maximum 6 question/
	short Correct_ans[NUM_OF_QUESTIONS];                // 3 option & 1 for the entered question
};
struct Teacher
{
	string Username, correctpassword;
	Subjects course;              //course[0] for teach[0],course[1] for teach[1]       
	Question_Bank qeus_bank;    
}teacher[NUM_OF_TEACH];
struct Student
{
	string Username, correctpassword;
	int ID_student;
	Subjects course[NUM_OF_SUB];   //student will choose  course[] -> exam for this sub
}stud;


//function declaration
 
//initialise functions
void init();

//sign in functions
bool sign_in();
void check_user();

//teacher functions
int main_menu_teacher();
void handle_teacher();
void profile_teach();
// exam functions
void questions_bank();
void display_question(string Question[][NUM_OF_OPTIONS], short Correct_ans[]);
void Add();
void Delete(short dele_ques);
void edit();
void edit_Exam();
void display_pre_exam();
void time(short index_test);
void Select_ques(short selected_ques[NUM_OF_QUESTIONS], short index_test);
void Creat_new_test();

//student functions
int main_menu_stud();
void handle_student();
void profile_stud();
void select_course();
void view_grades();
bool timer(short index_test);



int main()
{
	init();
	if (sign_in())
		check_user();

	return 0;
}

void init()
{
	teacher[0] = { "Lina","123abc" };
	teacher[0].course.course_name = "Structured programming";
	teacher[0].course.course_code = "cis260";
	teacher[1] = { "Maha","0000" };
	teacher[1].course.course_name = "History";
	teacher[1].course.course_code = "HIST101";
	stud.ID_student = 2023170;
	stud = {"Aya","2004" };

	teacher[1].qeus_bank.Question[0][0] = "What is the capital of Egypt?";
	teacher[1].qeus_bank.Question[0][1] = "Damascus";
	teacher[1].qeus_bank.Question[0][2] = "Cairo";
	teacher[1].qeus_bank.Question[0][3] = "Giza";
	teacher[1].qeus_bank.Correct_ans[0] =  2;
	teacher[1].qeus_bank.Question[1][0] = "When did the 6th October war happen?";
	teacher[1].qeus_bank.Question[1][1] = "1970";
	teacher[1].qeus_bank.Question[1][2] = "1957";
	teacher[1].qeus_bank.Question[1][3] = "1973";
	teacher[1].qeus_bank.Correct_ans[1] = 3;

}

bool sign_in()
{

	string username, password;
	int trials = 3;
	bool verified = false;

	do
	{

		cout << "\n\t\t ******* Online Exam System *******\n";
		cout << "\t\t-------------------------------------\n\n";
		cout << "   username:\t\t";
		cin >> username;
		cout << "   password:\t\t";
		char pass;
		while ((pass = _getch()) != '\r')
			if (pass == '\b')
			{
				if (!password.empty())
				{
					cout << "\b \b";
					password.pop_back();
					cout.flush();
				}
			}
			else

			{
				cout << "*";
				password += pass;

			}
		cout << endl;

		for (int i = 0; i < NUM_OF_TEACH; ++i)
		{
			if (username == teacher[i].Username && password == teacher[i].correctpassword)
			{
				cout << "  login successfully\n";
				cout << "  Welcome back " << teacher[i].Username << endl;
				user = i ; 
				verified = true;
				break;
			}
		}
		for (int i = 0; i < NUM_OF_STUD; ++i)
		{
			if (!verified && username == stud.Username && password == stud.correctpassword)
			{
				cout << " login successfully\n";
				cout << "  Welcome back " << stud.Username << endl;
				user = NUM_OF_TEACH+1;
				verified = true;
			}
		}
		 if (!verified)
		{
			cout << " incorrect password or username\n ";
			verified = false;
			trials--;
			password.clear();
		}

		if (verified)
			return true;



	} while (!verified && trials > 0);


	cout << " You have reached the maximum number of trials, please try again \n";
	return false;


}
void check_user()
{

	if (user < NUM_OF_TEACH)
		handle_teacher();
	else
		handle_student();
}

int main_menu_teacher()
{
	int choice;
	cout << "Press\n"
		<< "1 --> My Profile\n" //username, password, course code 
		<< "2 --> Question Bank\n" // add, delete all questions in one place 
		<< "3 --> Create New Test\n" //generate time for test, add questions to test
		<< "4 --> Edit Existing Test\n" //add questions, remove questions, edit test time
		<< "5 --> View Students Grades\n" // username stud, test name/num ,grade
		<< "6 --> Logout :(\n"; //directed to login page
	cin >> choice;
	return choice;
}
int main_menu_stud()
{
	int choice;
	cout << "Press...\n"
		<< "1 --> My Profile\n" //username, password, course code, id
		<< "2 --> Select Course\n" // select course --> course name & course code 
		<< "3 --> Select Test\n" //select course --> select test --> answer it (limited time) --> submit
		<< "4 --> View My Grades\n" // see all grades --> see grades for all subjects, course code --> see grades for just one subject
		<< "5 --> Logout :(\n"; //directed to login page
	cin >> choice;
	return choice;
}

void handle_teacher()
{
	char ans;
	int choice;

	do
	{
		choice = main_menu_teacher();
		switch (choice)
		{
		case 1:
			profile_teach();
			break;
		case 2:
			questions_bank();
			break;
		case 3:
			Creat_new_test();
			break;
		case 4:
			edit_Exam();
			break;
		case 5:
			break;
		case 6:
			sign_in();
			check_user();
			ans = 'y';
			continue;
		default:
			cout << "invalid choice please choose from 1 to 6\n";
			ans = 'y';
			continue;
		}
		cout << "Another choice? (y/n)\n";
		cin >> ans;
	} while (ans == 'Y' || ans == 'y');
	cout << "Thank you for using our system :)\n";
}
void handle_student()
{
	int choice;
	char ans;

	do
	{
		choice = main_menu_stud();
		switch (choice)
		{
		case 1:
			profile_stud();
			break;
		case 2:
			select_course();
			break;
		case 3:
			break;
		case 4:
			view_grades();
			break;
		case 5:
			sign_in();
			check_user();
			ans = 'y';
			continue;
		default:
			cout << "invalid choice please choose from 1 to 5\n";
			ans = 'y';
			continue;
		}
		cout << "Another choice? (y/n)\n";
		cin >> ans;
	} while (ans == 'y' || ans == 'Y');
	cout << "Thank you for using our system :)\n";
}


void profile_teach()
{
	cout << " Username :\t\t" << teacher[user].Username << endl;
	cout << " Password :\t\t" << teacher[user].correctpassword << endl;
	cout << " Course Code :\t\t" << teacher[user].course.course_code << endl;

}
void profile_stud()
{
	cout << " ID:\t\t" << stud.ID_student << endl;
	cout << " Username :\t\t" << stud.Username << endl;
	cout << " Password :\t\t" << stud.correctpassword << endl;
	for (int i = 0; i < NUM_OF_SUB; i++)
		if (!stud.course[i].course_name.empty())
			cout << " Course Name:\t\t" << stud.course[i].course_name <<
			"\t\t" << stud.course[i].course_code << endl;


}

void select_course()
{
	int choice;
	char ans;
	do
	{
		cout << "Press\n";
		for (int i = 0; i < NUM_OF_SUB; i++)
			cout << i + 1 << " --> " << teacher[i].course.course_name <<
			"\t" << teacher[i].course.course_code << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			stud.course[0].course_name = "Structured programming";
			break;
		case 2:
			stud.course[1].course_name = "History";
			break;
		default:
			cout << "invalid choice please choose 1 or 2\n";
			ans = 'y';
			continue;
		}
		cout << "Another course? (y/n)\n";
		cin >> ans;
	} while (ans == 'y' || ans == 'Y');

}

void view_grades()
{
	int choice;
	char ans;
	do
	{
		cout << "Press\n"
			<< "1 --> View All Your Grades\n"
			<< "2 --> View Structured Programming grade\n"
			<< "3 --> View History grade\n";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Course Name \t\t Course Code \t\t Test Name \t\t Your Grade\n";
			for (int i = 0; i < 2; i++)
				if (!stud.course[0].course_name.empty())
					cout << stud.course[0].course_name <<
					"\t\t" << teacher[i].course.course_code << "\t\t" <<
					stud.course[i].test[i].grade << endl;
			break;
		case 2:
			cout << "Course Name \t\t Course Code \t\t Test Name \t\t Your Grade\n";
			cout << teacher[0].course.course_name << "\t\t" <<
				teacher[0].course.course_code << "\t\t" <<
				endl;//باقي نضيف اسامي الامتحانات والدرجات في لووب
			break;
		case 3:
			cout << "Course Name \t\t Course Code \t\t Test Name \t\t Your Grade\n";
			cout << teacher[1].course.course_name << "\t\t" <<
				teacher[1].course.course_code << "\t\t" <<
				endl; //باقي نضيف اسامي الامتحانات والدرجات في لووب
			break;
		default:
			cout << "Invalid choice, please choose from 1 to 3";
			ans = 'y';
			continue;
		}
		cout << "Do you want to choose another viewing option? (y/n)\n";
		cin >> ans;
	} while (ans == 'y' || ans == 'Y');
}

void questions_bank()
{
	char ans;
	short choice;

	// اقصى عدد اسئله ممكن أضافتها  6 اسئله
	/* exist_Exam.examText[0] = "What is the capital of Egypt?\n";
    exist_Exam.examText[1] = "What is the area of Egypt?\n";
    exist_Exam.examText[2] = "How many governments in Egypt?\n";
    exist_Exam.examText[3] = "When is the 6th October war?\n";
    exist_Exam.examAnswer[0] = "Cairo\n";
    exist_Exam.examAnswer[1] = "98 km2\n";
    exist_Exam.examAnswer[2] = "27\n";
    exist_Exam.examAnswer[3] = "1973\n";
   */
	display_question(teacher[user].qeus_bank.Question,teacher[user].qeus_bank.Correct_ans);
	do 
	{
		cout << "Press\n"
			<< "1--> Add New Question\n"
			<< "2-->Edit Question\n"
			<< "3-->Delete Question\n"
			<< "4-->Cancel\n";
		cin >> choice;
		switch (choice)
		{case 1:
			Add();
			display_question(teacher[user].qeus_bank.Question, teacher[user].qeus_bank.Correct_ans);
			break;
		case 2:
			edit();
		    break;
		case 3:
		{
			short dele_ques;
			if (!teacher[user].qeus_bank.Question[0][0].empty()) //if the first question is empty,it means that there are no any questions
			{
				cout << "Please Enter number of question to delete it \n";
				cin >> dele_ques;
				Delete(dele_ques);
				display_question(teacher[user].qeus_bank.Question, teacher[user].qeus_bank.Correct_ans);
			}
			else
				cout << "There is no questions to delete \n\n";

		}
			break;
		case 4:
			ans = 'n';
			continue;
		default:
			cout << "invalid choice please choose from 1 to 4\n";
			ans = 'y';
			continue;
		}
		cout << "Another Edit? (y/n)\n";
		cin >> ans;
	} while (ans == 'y' || ans == 'Y');


	
}
void display_question(string Question[][NUM_OF_OPTIONS],short Correct_ans[])
{
	if (Question[0][0].empty())
		cout << " There is no any Question\n\n";

	else
	{
		for (int i = 0; i < NUM_OF_QUESTIONS && !Question[i][0].empty(); i++)  //& row is full
		{
			
			
			cout << i + 1 << "-->" << Question[i][0] << endl;

			for (int j = 1; j < NUM_OF_OPTIONS; j++)
			{
				cout << j << "- " << Question[i][j] << "\t\t";

			}
			cout << endl << endl;
			cout << "The index of the Correct answer is :" << Correct_ans[i] << "\n\n";
			

		}
	}


}// this function will display any group of questions as long as the number of questions doesn't exceed NUM_OF_QUESTIONS
void Add()
{
	int empty_raw = -1;
	for (int i = 0; i < NUM_OF_QUESTIONS; i++)
	{
		if (teacher[user].qeus_bank.Question[i][0].empty())
		{
			empty_raw = i;
			break;
		}

	}
	if (empty_raw != -1)
	{
		cout << "Type the new question\n";
		cin.ignore();  //It ignores any remaining characters (typically \n) in the buffer after reading with cin
		getline(cin, teacher[user].qeus_bank.Question[empty_raw][0]);
		cout << "Type the options\n";
		for (int j = 1; j < NUM_OF_OPTIONS; j++)
		{
			getline(cin, teacher[user].qeus_bank.Question[empty_raw][j]);
		}
		cout << "Type the index of the correct answer\n";
		 cin>>teacher[user].qeus_bank.Correct_ans[empty_raw];
	}
	else
	{
		cout << "\n No empty slots available to add new question.\n\n";
		Sleep(2000);
	}
}
void Delete( short dele_ques)
{
	if (dele_ques <= NUM_OF_QUESTIONS)
	{
		for (int j = 0; j < NUM_OF_OPTIONS; j++)
			teacher[user].qeus_bank.Question[dele_ques - 1][j].clear();
		teacher[user].qeus_bank.Correct_ans[dele_ques - 1] = NULL;
		for (int i = dele_ques; i < NUM_OF_QUESTIONS; i++)
		{
			for (int j = 0; j < NUM_OF_OPTIONS; j++)
			{
				teacher[user].qeus_bank.Question[i - 1][j] = teacher[user].qeus_bank.Question[i][j];
			}
			teacher[user].qeus_bank.Correct_ans[i - 1] = teacher[user].qeus_bank.Correct_ans[i];
		}
		for (int j = 0; j < NUM_OF_OPTIONS; j++)
			teacher[user].qeus_bank.Question[NUM_OF_QUESTIONS - 1][j].clear();
		teacher[user].qeus_bank.Correct_ans[NUM_OF_QUESTIONS - 1] = NULL;

	}
	else
		cout << "This question does not exist\n";

}
void edit()
{
	 short edit_ques;
	 if (!teacher[user].qeus_bank.Question[0][0].empty())
	 {
		 cout << "Please Enter number of question to edit it \n";
		 cin >> edit_ques;
		 for (int j = 0; j < NUM_OF_OPTIONS; j++)
			 teacher[user].qeus_bank.Question[edit_ques - 1][j]="";
		 teacher[user].qeus_bank.Correct_ans[edit_ques - 1]= NULL;
		 Add();
		 display_question(teacher[user].qeus_bank.Question, teacher[user].qeus_bank.Correct_ans);
	 }
	else
		cout << "There is no questions to edit \n\n";
}
void edit_Exam()
{
	
	display_pre_exam();
	
}
void display_pre_exam()
{
	short test_num ;
	if (!teacher[user].course.test[0].exam_name.empty()) // if test[0] is empty that means test[1 2 3 .....] is empty too
	{
		for (int i = 0; i < NUM_OF_EXAM; i++)
		{
			if (!teacher[user].course.test[i].exam_name.empty())
			{
				cout << i + 1 << "-" << teacher[user].course.test[i].exam_name<<endl;
			}
			else
				break;
		}
		cout << "Enter the test number to display it Or edit it \n";
		cin >> test_num;
		display_question(teacher[user ].course.test[test_num-1].examText, teacher[user].course.test[test_num - 1].examAnswer);
	}
	else
		cout << "There are no tests yet\n";

}
bool timer(short index_test)
{
	int hours = teacher[user].course.test[index_test].time.hours,
		min = teacher[user].course.test[index_test].time.min, 
		sec = teacher[user].course.test[index_test].time.sec;
		while (true )
	{
		system("cls");   //to clean the screen display and show the updated time 
		if (sec > 0)
		{
			sec--;
		}
		else {
			if (min > 0)
			{
				min--;
				sec = 59;
			}
			else
			{
				if (hours > 0)
				{
					hours--;
					min = 59;
					sec = 59;
				}
				else { break; }
			}
		}

		cout << hours << ":" << min << ":" << sec;

		Sleep(900); //to stop the program for 0.9 sec
	}
	cout << " time end :( " << endl;
	return true;

}
void time(short index_test)
{
	cout << "enter the exam time hours -> min -> sec" << endl;
	cin >> teacher[user].course.test[index_test].time.hours
		>> teacher[user].course.test[index_test].time.min
		>> teacher[user].course.test[index_test].time.sec;
	cout<< teacher[user].course.test[index_test].time.hours << " h : "
		<< teacher[user].course.test[index_test].time.min << " min : "
		<< teacher[user].course.test[index_test].time.sec <<" sec " << endl;

}
void Creat_new_test()
{
	short selected_ques[NUM_OF_QUESTIONS] = {};
	if (teacher[user].course.test[NUM_OF_EXAM - 1].exam_name != "")   //the last test is full
	
		cout << "\n No empty slots available to add new Exam.\n\n";
	else
	{
		if (!teacher[user].qeus_bank.Question[0][0].empty())
		{
			for (short index_test = 0; index_test < NUM_OF_EXAM; index_test++)
			{
				if (teacher[user].course.test[index_test].exam_name.empty())
				{
					cout << "Type the Exam name\n";
					cin >> teacher[user].course.test[index_test].exam_name;
					time(index_test);
					cout << "Enter the number of the selected questions\n";
					Sleep(300);
					display_question(teacher[user].qeus_bank.Question, teacher[user].qeus_bank.Correct_ans);
					for (int i = 0; i < NUM_OF_QUESTIONS; i++)
					{
						cin >> (selected_ques[i]);
						if (cin.peek() == '\n')
							break;
					}
					Select_ques(selected_ques, index_test);
					break;

				}

			}
		}
		else
			cout << "There are no questions to choose from \n";
	}

}

void Select_ques(short num_selected_ques[NUM_OF_QUESTIONS],short index_test)
{
	short index_selected_ques;
	for (int i = 0; i <= NUM_OF_QUESTIONS && num_selected_ques[i] > 0; i++)
	{
		index_selected_ques = num_selected_ques[i]-1;
		if (teacher[user].qeus_bank.Correct_ans[index_selected_ques]==NULL)
			continue;
		else
		{
			
				for (int j = 0; j < NUM_OF_OPTIONS; j++)
					teacher[user ].course.test[index_test].examText[i][j] = teacher[user].qeus_bank.Question[index_selected_ques][j];
				teacher[user].course.test[index_test].examAnswer[i] = teacher[user].qeus_bank.Correct_ans[index_selected_ques];

			
		}

	}
	cout << "done \n ";

}
