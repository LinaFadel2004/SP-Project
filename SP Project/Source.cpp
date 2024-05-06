#include <iostream>
#include <string >
#include <conio.h>
#include <Windows.h>
#include<thread>
using namespace std;


//constant 
#define NUM_OF_TEACH 2
#define NUM_OF_STUD 2
#define NUM_OF_SUB 2
#define NUM_OF_EXAM 3
#define NUM_OF_QUESTIONS 3
#define NUM_OF_OPTIONS 4    

// global variables
int user;                      //index for active user  on the system
bool time_is_finished = false;
bool is_submit = false;

//struct
struct TIME
{
	int hours, min, sec;
};
struct Question_Bank
{
	string Question[NUM_OF_QUESTIONS][NUM_OF_OPTIONS];   //maximum 6 question/
	short Correct_ans[NUM_OF_QUESTIONS];                // 3 option & 1 for the entered question
};
struct EXAM
{
	string exam_name;
	TIME time = { 0,0,0 };
	int grade = -1;
	string examText[NUM_OF_QUESTIONS][NUM_OF_OPTIONS];
	short examAnswer[NUM_OF_QUESTIONS];
	int fullmark = 0;
};
struct Subjects
{
	string course_code;
	string course_name;
	EXAM test[NUM_OF_EXAM];
};
struct Teacher
{
	string Username, correctpassword;
	Subjects course;              //course[0] for teach[0],course[1] for teach[1]       
	Question_Bank ques_bank;
}teacher[NUM_OF_TEACH];
struct Student
{
	string Username, correctpassword;
	int ID_student;
	Subjects course[NUM_OF_SUB];   //student will choose  course[] -> exam for this sub
}stud[NUM_OF_STUD];

//function declaration


   // general functions
void init();
void register_sub();
void display_question(string Question[][NUM_OF_OPTIONS], short Correct_ans[]);
void Delete(string Question[][NUM_OF_OPTIONS], short Correct_ans[], short dele_ques);
void Greades(short index_taech);
bool sign_in();
void check_user();
void space(); //just to make a space before what I'll display

//menu functions
int main_menu_teacher();
int main_menu_stud();


//handle functions
void handle_teacher();
void handle_student();


//view profile functions
void profile_teach();
void profile_stud();


//teacher functions
void view_student();
void questions_bank();
void Add();
void edit_question_bank();
void choice_edit_Exam(short index_exam);
void edit_and_display_pre_exam();
void time(short index_test);
void Creat_new_test();
void info_pre_exam();
void Select_ques(short selected_ques[NUM_OF_QUESTIONS], short index_test);
void add_new_ques(short index_exam);
void delete_exam(short index_test);
void choose_aQues(short index_exam);
void Edit_Exam_questions(short index_exam);

//student functions
void select_course();
void view_grades_stud();
void submit_ans(short index_exam, short index_sub, short stude_ans[]);
void edit_ans_stud(short index_exam, short index_sub, short stude_ans[]);
void Display_Exams(short index_exam, short index_sub, short stude_ans[]);
void solve_exam(short index_exam, short index_sub);
void Choose_Exams(short);
bool timer(short index_sub, short index_test);






int main()
{
	init();
	if (sign_in())
		check_user();
	return 0;
}





//**********  function definitions  **********//
void init()
{
	teacher[0] = { "Lina","123" };
	teacher[0].course.course_name = "English";
	teacher[0].course.course_code = "ENG260";
	teacher[1] = { "Maha","0000" };
	teacher[1].course.course_name = "History";
	teacher[1].course.course_code = "HIST101";
	stud[0] = { "Aya","2004" , 2023170 };
	stud[1] = { "Mai","2000" , 2023180 };

	/************ for english ques bank ****************/
	teacher[0].ques_bank.Question[0][0] = "I was playing football, while my sister.....";
	teacher[0].ques_bank.Question[0][1] = "was cooking";
	teacher[0].ques_bank.Question[0][2] = "cooking";
	teacher[0].ques_bank.Question[0][3] = "cooks";
	teacher[0].ques_bank.Correct_ans[0] = 1;

	teacher[0].ques_bank.Question[1][0] = "I eat.....apple";
	teacher[0].ques_bank.Question[1][1] = "a";
	teacher[0].ques_bank.Question[1][2] = "an";
	teacher[0].ques_bank.Question[1][3] = "no article";
	teacher[0].ques_bank.Correct_ans[1] = 2;

	teacher[0].ques_bank.Question[2][0] = "We were on the way to school.Suddenly,the sky.....dark";
	teacher[0].ques_bank.Question[2][1] = "turns";
	teacher[0].ques_bank.Question[2][2] = "turned";
	teacher[0].ques_bank.Question[2][3] = "had turned";
	teacher[0].ques_bank.Correct_ans[2] = 2;

	/************* English Exam **************************/
	teacher[0].course.test[0].exam_name = "Quiz_1";
	teacher[0].course.test[0].examText[0][0] = "I was....football";
	teacher[0].course.test[0].examText[0][1] = "play";
	teacher[0].course.test[0].examText[0][2] = "played";
	teacher[0].course.test[0].examText[0][3] = "playing";
	teacher[0].course.test[0].examAnswer[0] = 3;
	teacher[0].course.test[0].time.min = 1;

	teacher[0].course.test[1].exam_name = "Quiz_2";
	teacher[0].course.test[1].examText[0][0] = "I....to the school yesterday";
	teacher[0].course.test[1].examText[0][1] = "go";
	teacher[0].course.test[1].examText[0][2] = "goes";
	teacher[0].course.test[1].examText[0][3] = "went";
	teacher[0].course.test[1].examAnswer[0] = 3;
	teacher[0].course.test[1].time.min = 1;


	/**************for history ques bank***********************/

	teacher[1].ques_bank.Question[0][0] = "What is the capital of Egypt?";
	teacher[1].ques_bank.Question[0][1] = "Damascus";
	teacher[1].ques_bank.Question[0][2] = "Cairo";
	teacher[1].ques_bank.Question[0][3] = "Giza";
	teacher[1].ques_bank.Correct_ans[0] = 2;

	teacher[1].ques_bank.Question[1][0] = "When did the 6th October war happen?";
	teacher[1].ques_bank.Question[1][1] = "1970";
	teacher[1].ques_bank.Question[1][2] = "1957";
	teacher[1].ques_bank.Question[1][3] = "1973";
	teacher[1].ques_bank.Correct_ans[1] = 3;

	teacher[1].ques_bank.Question[2][0] = "What happened on 7th October 2023";
	teacher[1].ques_bank.Question[2][1] = "El-Aqsa flood by Hamas";
	teacher[1].ques_bank.Question[2][2] = "6th October war";
	teacher[1].ques_bank.Question[2][3] = "Arab became free";
	teacher[1].ques_bank.Correct_ans[2] = 1;
}
void register_sub()
{
	for (int i = 0; i < NUM_OF_SUB; i++)
	{
		stud[user - NUM_OF_TEACH].course[i].course_name = teacher[i].course.course_name;
		stud[user - NUM_OF_TEACH].course[i].course_code = teacher[i].course.course_code;
	}
}
bool sign_in()
{

	string username, password;
	int trials = 3;
	bool verified = false;

	do
	{

		cout << "\n\t\t\t\t\t\t*** Online Exam System ***\n";
		cout << "\t\t\t\t\t&-------------------------------------&\n\n\n";
		cout << "\t\t\t\t\t      username:\t\t";
		cin >> username;
		cout << "\t\t\t\t\t      password:\t\t";
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
				cout << "\n\t\t\t\t\t\t   login successfully\n";
				cout << "\n\t\t\t\t\t\t   Welcome back, Dr." << teacher[i].Username << endl;
				cout << "\n\t---------------------------------------------------------------------------------------------------------\n";
				user = i;
				verified = true;
				break;
			}
		}
		for (int i = 0; i < NUM_OF_STUD; ++i)
		{
			if (!verified && username == stud[i].Username && password == stud[i].correctpassword)
			{
				cout << "\n\t\t\t\t\t\t   login successfully\n";
				cout << "\n\t\t\t\t\t\t    Welcome back " << stud[i].Username << endl;
				cout << "\n\t---------------------------------------------------------------------------------------------------------\n";
				user = NUM_OF_TEACH + i;
				verified = true;
			}
		}
		if (!verified)
		{
			cout << "\n\t\t\t\t\t   incorrect password or username\n ";
			verified = false;
			trials--;
			password.clear();
		}

		if (verified)
			return true;



	} while (!verified && trials > 0);


	cout << "\t\nYou have reached the maximum number of trials, please try again \n";
	return false;


}
void check_user()
{

	if (user < NUM_OF_TEACH)
		handle_teacher();
	else
		handle_student();
}
void space()
{
	cout << "\n\t\t\t\t\t";
}

//view profile functions
void profile_teach()
{
	system("cls");
	space();
	cout << "Username :\t\t" << teacher[user].Username << endl;
	space();
	cout << "Password :\t\t" << teacher[user].correctpassword << endl;
	space();
	cout << "Course Code :\t\t" << teacher[user].course.course_code << endl;

}
void profile_stud()
{
	cout << " ID:\t\t" << stud[user - NUM_OF_TEACH].ID_student << endl;
	cout << " Username :\t\t" << stud[user - NUM_OF_TEACH].Username << endl;
	cout << " Password :\t\t" << stud[user - NUM_OF_TEACH].correctpassword << endl;
	for (int i = 0; i < NUM_OF_SUB; i++)
		cout << " Course Name:\t\t" << stud[user - NUM_OF_TEACH].course[i].course_name <<
		"\t\t" << stud[user - NUM_OF_TEACH].course[i].course_code << endl;


}
//handle functions
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
			system("cls");
			profile_teach();
			break;
		case 2:
			system("cls");
			questions_bank();
			break;
		case 3:
			system("cls");
			Creat_new_test();
			break;
		case 4:
			system("cls");
			edit_and_display_pre_exam();
			break;
		case 5:
			system("cls");
			view_student();
			break;
		case 6:
			system("cls"); //to clear the screen and only display the sign in function
			sign_in();
			check_user();
			ans = 'y';
			continue;
		default:
			space();
			cout << "invalid choice please choose from 1 to 6\n";
			ans = 'y';
			continue;
		}
		space();
		cout <<"Back to the Main Menu? (y / n)\n\t\t\t\t\t";
		cin >> ans;
	} while (ans == 'Y' || ans == 'y');
	system("cls");
	cout<<"Thank you for using our system :)\n";
	cout << "\n*-----------------------------------------------------------------------------------*\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
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
			system("cls");
			profile_stud();
			break;
		case 2:
			system("cls");
			select_course();
			break;
		case 3:
			system("cls");
			view_grades_stud();
			break;
		case 4:
			system("cls"); //to clear the screen and only display the sign in function
			sign_in();
			check_user();
			ans = 'y';
			continue;
		default:
			cout << "\n\tinvalid choice please choose from 1 to 4\n";
			ans = 'y';
			continue;
		}
		cout << "\n\tBack to the Main Menu? (y/n)\n";
		cin >> ans;
	} while (ans == 'y' || ans == 'Y');
	system("cls");
	cout << "\n\n\n\n\n\n\n\t\t\t\t\tThank you for using our system :)\n";
	cout << "\n*-----------------------------------------------------------------------------------*\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}


//general functions
void display_question(string Question[][NUM_OF_OPTIONS], short Correct_ans[])
{
	if (Question[0][0].empty())
		cout << " There is no any Question\n\n";

	else
	{
		for (int i = 0; i < NUM_OF_QUESTIONS && !Question[i][0].empty(); i++)  //& row is full
		{
			space();
			cout << i + 1 << "-->" << Question[i][0] << endl;

			for (int j = 1; j < NUM_OF_OPTIONS; j++)
			{
			space();
				cout << j << "- " << Question[i][j] << "\t\t";
			}
			space();
			cout << "The index of the Correct answer is :" << Correct_ans[i] << "\n\n";


		}
	}


}// this function will display any group of questions as long as the number of questions doesn't exceed NUM_OF_QUESTIONS
void Delete(string Question[][NUM_OF_OPTIONS], short Correct_ans[], short dele_ques)
{
	if (dele_ques <= NUM_OF_QUESTIONS)
	{
		for (int j = 0; j < NUM_OF_OPTIONS; j++)
			Question[dele_ques - 1][j].clear();
		Correct_ans[dele_ques - 1] = NULL;
		for (int i = dele_ques; i < NUM_OF_QUESTIONS; i++)
		{
			for (int j = 0; j < NUM_OF_OPTIONS; j++)
			{
				Question[i - 1][j] = Question[i][j];
			}
			Correct_ans[i - 1] = Correct_ans[i];
		}
		for (int j = 0; j < NUM_OF_OPTIONS; j++)
			Question[NUM_OF_QUESTIONS - 1][j].clear();
		Correct_ans[NUM_OF_QUESTIONS - 1] = NULL;
		space();
		cout << "*--Done--*\n\t\t\t\t\t";
	}
	else
	{
		space();
		cout << "This question does not exist\n";
	}

}
void Greades(short index_sub)
{
	for (int j = 0; j < NUM_OF_EXAM; j++)
	{
		if (teacher[index_sub].course.test[j].exam_name.empty())
			cout << "\t\t    ~ \t\t\t   -/-\n";
		else
		{
			cout << "\t          " << teacher[index_sub].course.test[j].exam_name;
			if (stud[user - NUM_OF_TEACH].course[index_sub].test[j].grade >= 0)
				cout << "\t           " << stud[user - NUM_OF_TEACH].course[index_sub].test[j].grade << "/" << teacher[index_sub].course.test[j].fullmark << endl;
			else
				cout << "\t\t   -/" << teacher[index_sub].course.test[j].fullmark << endl;
		}
	}
	
}


//menu functions
int main_menu_teacher()
{
	int choice;
	space();
	cout << "|Press...\n\n\t\t\t\t\t"
		<< "1 --> My Profile\n\t\t\t\t\t" //username, password, course code 
		<< "2 --> Question Bank\n\t\t\t\t\t" // add, delete all questions in one place 
		<< "3 --> Create New Test\n\t\t\t\t\t" //generate time for test, add questions to test
		<< "4 --> Edit\\Display Existing Test\n\t\t\t\t\t" //add questions, remove questions, edit test time & name ,delete exam,display ques exam
		<< "5 --> View Students Grades\n\t\t\t\t\t" // username stud, test name/num ,grade
		<< "6 --> Logout :(\n\t\t\t\t\t"; //directed to login page
	cin >> choice;
	return choice;
}
int main_menu_stud()
{
	space();
	int choice;
	cout << "\n|Press...\n\n"
		<< "1 --> My Profile\n" //username, password, course code, id
		<< "2 --> Select Course to do exam\n" // select course --> course name & course code 
		//select course --> select test --> answer it (limited time) --> submit
		<< "3 --> View My Grades\n" // see all grades --> see grades for all subjects, course code --> see grades for just one subject
		<< "4 --> Logout :(\n\t\t\t\t\t"; //directed to login page
	cin >> choice;
	return choice;
}



//teacher functions 
void questions_bank()
{
	char ans;
	short choice;
		system("cls");
		cout << "\n\n";
	do
	{
		space();
		cout << "    Press...\n\t\t\t\t\t";
		cout << "1--> Add New Question\n\t\t\t\t\t";
		cout << "2-->Edit Question\n\t\t\t\t\t";
		cout << "3-->Delete Question\n\t\t\t\t\t";
		cout<< "4-->Cancel\n\t\t\t\t\t";
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			cout << "\n\n";
			space();
			Add();
			break;
		case 2:
			system("cls");
			edit_question_bank();
			break;
		case 3:
		{
			system("cls");
			cout << "\n\n";
			space();
			short dele_ques;
			if (!teacher[user].ques_bank.Question[0][0].empty()) //if the first question is empty,it means that there are no any questions
			{
				space();
				cout << "\n\t\t\t\t\t*Please Enter number of question to delete it*\n\n";
				display_question(teacher[user].ques_bank.Question, teacher[user].ques_bank.Correct_ans);
				cout << "\t\t\t\t\t";
				cin >> dele_ques;
				Delete(teacher[user].ques_bank.Question, teacher[user].ques_bank.Correct_ans, dele_ques);
			}
			else
			{
				space();
				cout << "There is no questions to delete\n\n";
			}

		}
		break;
		case 4:
			ans = 'n';
			continue;
		default:
			space();
			cout << "invalid choice please choose from 1 to 4\n";
			ans = 'y';
			continue;
		}
		cout << "\n\t\t\t\t\tAnother Edit? (y/n)\n\t\t\t\t\t";
		cin >> ans;
	} while (ans == 'y' || ans == 'Y');



}
void Add()
{
	int empty_raw = -1;
	for (int i = 0; i < NUM_OF_QUESTIONS; i++)
	{
		if (teacher[user].ques_bank.Question[i][0].empty())
		{
			empty_raw = i;
			break;
		}

	}
	if (empty_raw != -1)
	{
		space();
		cout << "-----------------------\n\t\t\t\t\t";
		cout << "Type the new question\n\t\t\t\t\t";
		cout << "-----------------------";
		cin.ignore();  //It ignores any remaining characters (typically \n) in the buffer after reading with cin
		cout << "\n\t\t\t\t\t";
		getline(cin, teacher[user].ques_bank.Question[empty_raw][0]);
		space();
		cout << "Type the options\n\n";
		for (int j = 1; j < NUM_OF_OPTIONS; j++)
		{
			cout << "\t\t\t\t\t";
			getline(cin, teacher[user].ques_bank.Question[empty_raw][j]);
		}
		space();
		cout << "Type the index of the correct answer\n\t\t\t\t\t";
		cin >> teacher[user].ques_bank.Correct_ans[empty_raw];
	}
	else
	{
		space();
		cout << "No empty slots available to add new question.\n\n";
		Sleep(1000);
	}
}
void edit_question_bank()
{
	short edit_ques;
	if (!teacher[user].ques_bank.Question[0][0].empty())
	{
		space();
		cout << "*Please Enter number of question to edit it*\n\t\t\t\t\t";
		display_question(teacher[user].ques_bank.Question, teacher[user].ques_bank.Correct_ans);
		cin >> edit_ques;
		for (int j = 0; j < NUM_OF_OPTIONS; j++)
			teacher[user].ques_bank.Question[edit_ques - 1][j] = "";
		teacher[user].ques_bank.Correct_ans[edit_ques - 1] = NULL;
		Add();
	}
	else
		system("cls");
		cout << "\n\n\n\n\n\t\t\t\t\tThere is no questions to edit \n\n";
}
void choice_edit_Exam(short index_exam)
{
	short choice;
	char ans;
	do
	{
		system("cls");
		space();
		cout << "|Press edit type...\n\n\t\t\t\t\t"
			<< "1 --> Exam name \n\t\t\t\t\t"
			<< "2 --> Exam time\n\t\t\t\t\t"
			<< "3 --> Exam questions\n\t\t\t\t\t"
			<< "4 --> cancel\n\t\t\t\t\t";
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			space();
			cout << "\n\tType the new Exam name\n";
			cin.ignore();
			space();
			getline(cin, teacher[user].course.test[index_exam].exam_name);
			system("cls");
			space();
			cout << "\n*--Done--*\n";
			break;
		case 2:
			system("cls");
			space();
			time(index_exam);
			space();
			cout << "\n*--Done--*\n";
			break;
		case 3:
			system("cls");
			space();
			cout << "Type your choice\n\n";
			Edit_Exam_questions(index_exam);
			break;
		case 4:
			ans = 'n';
			continue;
		default:
			system("cls");
			space();
			cout << "invalid choice please choose from 1 to 4\n";
			ans = 'y';
			continue;
		}
		space();
		cout << "Another edit ? (y/n)\n\t\t\t\t\t";
		cin >> ans;
	} while (ans == 'y' || ans == 'Y');
}
void edit_and_display_pre_exam()
{
	short test_num, choice;
	char ans;
	if (!teacher[user].course.test[0].exam_name.empty()) // if test[0] is empty that means test[1 2 3 .....] is empty too
	{


		do
		{
			system("cls");
			space();
			info_pre_exam();
			cout << "\n\t\t\t\t\t|Press...\n\n\t\t\t\t\t"
				<< "1 --> Display Exam Questions\n\t\t\t\t\t"
				<< "2 --> Edit Exam\n\t\t\t\t\t"
				<< "3 --> Delete Exam\n\t\t\t\t\t"
				<< "4 --> Cancel\n\t\t\t\t\t";
			cin >> choice;
			switch (choice)

			{
			case 1:
				space();
				cout << "*Enter the test number to display it* \n\n\t\t\t\t\t";
				cin >> test_num;
				display_question(teacher[user].course.test[test_num - 1].examText, teacher[user].course.test[test_num - 1].examAnswer);
				break;
			case 2:
				space();
				cout << "*Enter the test number to edit it*\n\n\t\t\t\t\t";
				cin >> test_num;
				choice_edit_Exam(test_num - 1);
				break;
			case 3:
				space();
				cout << "*Enter the test number to delete it*\n\n\t\t\t\t\t";
				cin >> test_num;
				delete_exam(test_num - 1);
				cout << "\n\tDone\n";
				break;
			case 4:
				ans = 'n';
				continue;
			default:
				system("cls");
				cout << "\n\n\n\n\n\t\t\t\t\tinvalid choice please choose from 1 to 4\n";
				ans = 'y';
				continue;
			}
				space();
			cout << "Back to Edit & Display menu? (y/n)\n\n\t\t\t\t\t";
			cin >> ans;

		} while (ans == 'y' || ans == 'Y');
	}
	else
		cout << "\n\n\n\n\n\t\t\t\t\t There are no tests yet\n";

}
void time(short index_test)
{
	space();
	cout << "Enter the exam time hours -> min -> sec\n\t\t\t\t\t";
	cin >> teacher[user].course.test[index_test].time.hours;
	cout << "\n\t\t\t\t\t";
	cin >> teacher[user].course.test[index_test].time.min;
	cout << "\n\t\t\t\t\t";
	cin >> teacher[user].course.test[index_test].time.sec;
	space();
	cout << teacher[user].course.test[index_test].time.hours << " h : "
		<< teacher[user].course.test[index_test].time.min << " min : "
		<< teacher[user].course.test[index_test].time.sec << " sec " << endl;
}
void Creat_new_test()
{
	short selected_ques[NUM_OF_QUESTIONS] = {};
	if (teacher[user].course.test[NUM_OF_EXAM - 1].exam_name != "")   //the last test is full
	{
		space();
		cout << "No empty slots available to add new Exam.\n\n";
	}
	else
	{
		if (!teacher[user].ques_bank.Question[0][0].empty())
		{
			for (short index_test = 0; index_test < NUM_OF_EXAM; index_test++)
			{
				if (teacher[user].course.test[index_test].exam_name.empty())
				{
		            space(); 
					cout << "*Type the Exam name*\n\t\t\t\t\t ------------------\n\t\t\t\t\t";
					cin >> teacher[user].course.test[index_test].exam_name;
					time(index_test);
		            space();  
					cout << "*Enter the number of the selected questions*\n\t\t\t\t\t------------------------------------------\n";
					display_question(teacher[user].ques_bank.Question, teacher[user].ques_bank.Correct_ans);
					for (int i = 0; i < NUM_OF_QUESTIONS; i++)
					{
						cout << "\t\t\t\t\t";
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
		{
			system("cls");
			cout << "\n\n\n\n\n\n\t\t\t\t\tThere are no questions to choose from \n";
		}
	}

}
void info_pre_exam()
{
	if (!teacher[user].course.test[0].exam_name.empty())
	{
		for (int i = 0; i < NUM_OF_EXAM; i++)
		{
			if (!teacher[user].course.test[i].exam_name.empty())

			{
				space();
				cout << i + 1 << "-" << teacher[user].course.test[i].exam_name << "\t\t" << teacher[user].course.test[i].time.hours << " h : "
					<< teacher[user].course.test[i].time.min << " min : "
					<< teacher[user].course.test[i].time.sec << " sec " << endl;
			}
			else
				continue;
		}
	}
	else
	{
		space();
		cout << "There are no tests yet\n";
	}

}
void delete_exam(short index_test)
{
	if (teacher[user].course.test[0].exam_name != "")// the first test is not empty
	{
		if (teacher[user].course.test[index_test].exam_name != "")
		{
			teacher[user].course.test[index_test].exam_name.clear();
			teacher[user].course.test[index_test].time.hours = NULL;
			teacher[user].course.test[index_test].time.min = NULL;
			teacher[user].course.test[index_test].time.sec = NULL;
			for (int i = 0; i < NUM_OF_QUESTIONS; i++)
			{
				if (teacher[user].course.test[index_test].examAnswer[i] != NULL) //if row is not empty
				{
					for (int j = 0; j < NUM_OF_OPTIONS; j++)
					{
						teacher[user].course.test[index_test].examText[i][j].clear();
					}
					teacher[user].course.test[index_test].examAnswer[i] = NULL;
				}
				else
					break;    //if question[i] is empty that mean question[i+1,+2...]is empty too
			}
		}
		else
		{
			space();
			cout << "This test does not exist\n";
		}
	}
	else
		cout << "There are no tests to delete it \n";

}
void Select_ques(short num_selected_ques[NUM_OF_QUESTIONS], short index_test)
{
	short index_selected_ques;
	for (int i = 0; i <= NUM_OF_QUESTIONS && num_selected_ques[i] > 0; i++)
	{
		index_selected_ques = num_selected_ques[i] - 1;
		if (teacher[user].ques_bank.Correct_ans[index_selected_ques] == NULL)
			continue;
		else
		{

			for (int j = 0; j < NUM_OF_OPTIONS; j++)
				teacher[user].course.test[index_test].examText[i][j] = teacher[user].ques_bank.Question[index_selected_ques][j];
			teacher[user].course.test[index_test].examAnswer[i] = teacher[user].ques_bank.Correct_ans[index_selected_ques];
		}

	}
	space();
	cout << "*--Done--*\n";

}
void add_new_ques(short index_exam)
{
	short num_selected_ques[NUM_OF_QUESTIONS], index_ques;
	int empty_raw = -1;
	for (int i = 0; i < NUM_OF_QUESTIONS; i++)
	{
		if (teacher[user].course.test->examText[i][0].empty())
		{
			empty_raw = i;
			break;
		}
	}
	space();
	cout << "*Enter the number of the questions you want to add*\n";
	display_question(teacher[user].ques_bank.Question, teacher[user].ques_bank.Correct_ans);
	for (int i = 0; i < NUM_OF_QUESTIONS; i++)
	{
	    space();
		cin >> num_selected_ques[i];
		if (cin.peek() == '\n')
			break;
	}
	if (empty_raw != -1)
	{
		int c = 0;
		for (int i = empty_raw; i < NUM_OF_QUESTIONS; i++)
		{
			index_ques = num_selected_ques[c] - 1;
			for (int j = 0; j < NUM_OF_OPTIONS && num_selected_ques[c]> 0; j++)
			{
				teacher[user].course.test[index_exam].examText[i][j] = teacher[user].ques_bank.Question[index_ques][j];
				teacher[user].course.test[index_exam].examAnswer[i] = teacher[user].ques_bank.Correct_ans[index_ques];
			}
			c++;
		}

	    space();
		cout << "*--Done--* \n ";
	}
	else
	{
		system("cls");
	    space();
		cout << "\n\n\n\n\nNo empty slots available to add new question.\n\n";
	}
}
void choose_aQues(short index_exam)
{

	short num_edited_ques, num_selected_ques;
	system("cls");
	space();
	cout << "|Your Exam is : \n\t\t\t\t\t------------------------\n\n";
	display_question(teacher[user].course.test[0].examText, teacher[user].course.test[0].examAnswer);
	space();
	cout << "*Enter the index of the question you want to edit in this exam*\n\t\t\t\t\t";
	cin >> num_edited_ques;
	system("cls");
	space();
	cout << "|Your Test Bank is:\n\t\t\t\t\t------------------------------\n\n";
	display_question(teacher[user].ques_bank.Question, teacher[user].ques_bank.Correct_ans);
	space();
	cout << "*the index of the question you want from the test bank*\n\t\t\t\t\t";
	cin >> num_selected_ques;
	for (int j = 0; j < NUM_OF_OPTIONS; j++)
		teacher[user].course.test[index_exam].examText[num_edited_ques - 1][j] = teacher[user].ques_bank.Question[num_selected_ques - 1][j];
	teacher[user].course.test[index_exam].examAnswer[num_edited_ques - 1] = teacher[user].ques_bank.Correct_ans[num_selected_ques - 1];
	space();
	cout << "*--Done--*\n";
}
void Edit_Exam_questions(short index_exam)

{
	short ansr;
	char ans;
	display_question(teacher[user].course.test[index_exam].examText, teacher[user].course.test[index_exam].examAnswer);
	do
	{
		space();
		cout << "|Press...\n\n\t\t\t\t\t"
			<< "1-Add new question\n\t\t\t\t\t"
			<< "2-Change a question from test bank\n\t\t\t\t\t"
			<< "3-Delete a question\n\t\t\t\t\t"
			<< "4-Cancel\n\t\t\t\t\t";
		cin >> ansr;
		switch (ansr)
		{
		case 1:
			system("cls");
			space();
			add_new_ques(index_exam);
			break;
		case 2:
			choose_aQues(index_exam);
			break;
		case 3:
			system("cls");
			space();
			short dele_ques;
			display_question(teacher[user].course.test[index_exam].examText, teacher[user].course.test[index_exam].examAnswer);
			space();
			cout << "*Enter the number of the question you want to delete*\n\t\t\t\t\t";
			cin >> dele_ques;
			Delete(teacher[user].course.test[index_exam].examText, teacher[user].course.test[index_exam].examAnswer, dele_ques);
			break;
		case 4:
			ans = 'n';
			continue;
		default:
			space();
			cout << "invalid choice please choose from 1 to 3\n";
			ans = 'y';
			continue;
		}
			space();
		cout << "Back to the Edit Exam Question list? (y/n)\n\t\t\t\t\t";
		cin >> ans;

	} while (ans == 'y' || ans == 'Y');
}
void view_student()
{
	char ans = 'n';
		if (teacher[user].course.test[0].exam_name.empty())
		{
			space();
			cout << "\n\n\n\n\n\n\t\t\t\t\t\t There is no Exams yet!";
			cout << "\n\n\n\n\n\n\t\t\t\t\t     Do you want to creat one?(y/n)\n\t\t\t\t\t\t\t";
			cin >> ans;
			if (ans == 'y' || ans == 'Y')
			{
				system("cls");
				Creat_new_test();
			}
			else
			{
				system("cls");
				main_menu_teacher();
			}
		}
		else
		{
				for (int i = 0; i < NUM_OF_EXAM; i++)
				{
			if (teacher[user].course.test[i].exam_name.empty())
				continue;
			else
			{
				//there is an error
				//when I loged in with Mai and did a history exam and got 1/2 then back to Dr/ Maha to see the grades I found Aya -/2 and Mai -/-
	        	space();
				cout << "\t    " << teacher[user].course.test[i].exam_name << "\n\t\t\t\t\t\t--------------\n\n\t\t\t";
				cout << "Student's Name \t\t Student's ID \t\t " << "The Grade\n\n";
				for (int j = 0; j < NUM_OF_STUD; j++)
				{
					cout << "\t\t\t    " << stud[j].Username << "\t\t\t   " << stud[j].ID_student << "\t\t    ";
					if (stud[j].course[user].test[j].grade < 0)
						cout << "-/" << teacher[user].course.test[j].fullmark << "\n\t\t\t\n";
					else
						cout << stud[j].course[user].test[j].grade << "/" << teacher[user].course.test[j].fullmark << "\n\n";
				}
				}
			}
		}
	
}



//student functions
void select_course()
{
	bool is_empty = true;
	short choice;
	char ans = 'n';
	do
	{


		cout << "Select the Course to do Exam\n";
		for (int i = 0; i < NUM_OF_SUB; i++)
		{


			cout << i + 1 << " --> " << teacher[i].course.course_name << endl;

		}
		cout << NUM_OF_SUB + 1 << " --> " << " Cancel\n";
		cin >> choice;
		for (int i = 0; i < NUM_OF_SUB; i++)
		{
			if (choice == i + 1)
			{
				Choose_Exams(choice - 1);
			}
		}
		if (choice == NUM_OF_SUB + 1)   //cancel
		{
			ans = 'n';
			continue;
		}

		else if (choice > NUM_OF_SUB + 1)
		{
			cout << "\n\tinvalid choice please enter valid number\n\n";
			ans = 'y';
			continue;
		}

		cout << "\n\tDo another exam?(y/n)\n";
		cin >> ans;
	} while (ans == 'y' || ans == 'Y');


}
bool timer(short index_sub, short index_test)
{
	int hours = teacher[index_sub].course.test[index_test].time.hours,
		min   = teacher[index_sub].course.test[index_test].time.min,
		sec   = teacher[index_sub].course.test[index_test].time.sec;
	/*int hours = 0,
		min = 1,
		sec = 0;*/
	while (true)
	{
		cout << "\r\t\t\t\t\t\t\t" << hours << ":" << min << ":" << sec << "\r";
		//system("cls");   //to clean the screen display and show the updated time
		if (is_submit)
			break;
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


		Sleep(900); //to stop the program for 0.9 sec
	}
	if (!is_submit)
		cout << " Time end :(" << "\n You can add only one answer now!" << endl;
	time_is_finished = true;

	return true;

}
void solve_exam(short index_exam, short index_sub)
{
	char ans = 'y';
	short stude_ans[NUM_OF_QUESTIONS] = {};
	thread timer_thread(timer, index_sub, index_exam);

	Display_Exams(index_exam, index_sub, stude_ans);
	while (!time_is_finished && (ans == 'y' || ans == 'Y'))
	{
		cout << "Do you want to Edit any answer (y\\n)?\n";
		cin >> ans;
		if (ans == 'y' || ans == 'Y')
		{
			edit_ans_stud(index_exam, index_sub, stude_ans);
		}
		else
		{
			is_submit = true;
		}

	}
	timer_thread.join();
	submit_ans(index_exam, index_sub, stude_ans);
}
void Choose_Exams(short choice)
{
	char ans;
	short  exam_num;
	do
	{
		time_is_finished = false;
		is_submit = false;
		if (!teacher[choice].course.test[0].exam_name.empty())
		{
			space();
			cout << "please choose the exam\n";
			short count_exam = 0;
			for (int j = 0; j < NUM_OF_EXAM; j++)
			{
				if (!teacher[choice].course.test[j].exam_name.empty())
				{
					cout << j + 1 << " --> " << teacher[choice].course.test[j].exam_name << " \t\t" <<
						teacher[choice].course.test[j].time.hours << " h : "
						<< teacher[choice].course.test[j].time.min << " min : "
						<< teacher[choice].course.test[j].time.sec << " sec " << endl;
					count_exam++;
				}
				else
					break;
			}
			cout << count_exam + 1 << " --> Cancel\n";
			cin >> exam_num;
			for (int i = 0; i < count_exam; i++)
				if (exam_num == i + 1)
				{
					solve_exam(exam_num - 1, choice);
				}
			if (exam_num == count_exam + 1)
			{
				ans = 'n';
				continue;
			}
			else if (exam_num > count_exam + 1)
			{
				system("cls");
				space();
				cout << "\n\n\n\n\ninvalid choice please enter valid number\n\n";
				ans = 'y';
				continue;

			}

		}
		else
		{
			system("cls");
			space();
			cout << "\n\n\n\n\nThere are No Exams yet\n";
			break;
		}
		space();
		cout << "Do you want to answer another test?\n";
		cin >> ans;

	} while (ans == 'y' || ans == 'Y');

}
void submit_ans(short index_exam, short index_sub, short stude_ans[])
{
	short correct_ans = 0;
	int num_que_in_exam = 0;
	for (; num_que_in_exam < NUM_OF_QUESTIONS || !time_is_finished;)
	{
		if (!teacher[index_sub].course.test[index_exam].examText[num_que_in_exam][0].empty())
		{
			if (stude_ans[num_que_in_exam] == teacher[index_sub].course.test[index_exam].examAnswer[num_que_in_exam])
				correct_ans++;
			num_que_in_exam++;
		}
		else
			break;

	}
	teacher[index_sub].course.test[index_exam].grade = correct_ans;
	stud[user - NUM_OF_TEACH].course[index_sub].test[index_exam].grade = correct_ans;
	teacher[index_sub].course.test[index_exam].fullmark = num_que_in_exam;
	cout << " Your Grade is " << stud[user - NUM_OF_TEACH].course[index_sub].test[index_exam].grade << "\\" << num_que_in_exam << endl;
}
void edit_ans_stud(short index_exam, short index_sub, short stude_ans[])
{
	short ques_edit;
	cout << "Please Enter number of question to edit answer it\n";
	cin >> ques_edit;
	cout << "please Enter the new answer\n";
	cin >> stude_ans[ques_edit - 1];
	cout << "Done\n";
	display_question(teacher[index_sub].course.test[index_exam].examText, stude_ans);

}
void Display_Exams(short index_exam, short index_sub, short stude_ans[])
{
	for (int i = 0; i < NUM_OF_QUESTIONS || !time_is_finished; i++)
	{
		if (!teacher[index_sub].course.test[index_exam].examText[i][0].empty())
		{
			cout << "\n" << i + 1 << " --> " << teacher[index_sub].course.test[index_exam].examText[i][0] << endl;
			for (int j = 1; j < NUM_OF_OPTIONS; j++)
				cout << " " << j << " --> " << teacher[index_sub].course.test[index_exam].examText[i][j] << "\t\t";
			cout << "\n\t\t\t\t\t" << "Enter your answer number OR Enter '0' to skip\n\t\t\t\t\t";
			if (time_is_finished)
				break;
			else
				cin >> stude_ans[i];
		}
		else
			break;
	}
}
void view_grades_stud()
{
	int choice;
	char ans;
	short index_sub;
	do
	{
		cout << "\n\t|Press...\n\n"
			<< "1 --> View All Your Grades\n"
			<< "2 --> View English grade\n"
			<< "3 --> View History grade\n"
			<< "4 --> cancel\n";
		cin >> choice;
		index_sub = choice - 2; //if the user chose 2 this mean the teacher who has index 2 - 2 = 0 and so on..
		switch (choice)
		{
		case 1:
			for (int i = 0; i < NUM_OF_TEACH; i++)
			{
				cout << "\t\t\t    " << stud[user-NUM_OF_TEACH].course[i].course_name << endl;
				cout << "\t\t Test Name \t\t Your Grade\n";
				Greades(i);
			}
			break;
		case 2:
			cout << "\t\t\t    " << stud[user-NUM_OF_TEACH].course[index_sub].course_name << endl;
			cout << "\t\t Test Name \t\t Your Grade\n";
			Greades(index_sub);
			break;
		case 3:
			cout << "\t\t\t    " << stud[user - NUM_OF_TEACH].course[index_sub].course_name << endl;
			cout << "\t\t Test Name \t\t Your Grade\n";
			Greades(index_sub);
			break;
		case 4:
			ans = 'n';
			continue;
		default:
			cout << "Invalid choice, please choose from 1 to 3";
			ans = 'y';
			continue;
		}
		cout << "Do you want to choose another viewing option? (y/n)\n";
		cin >> ans;
	} while (ans == 'y' || ans == 'Y');
}


/*                Done ALHAMDULILLAH (^_^)                 */
