#include <iostream>
#include <string >
#include <conio.h>
#include <ctime>
using namespace std;
int choice;
struct Subjects
{
	string course_code;
	int grade[2];
};
struct Teacher
{
	string Username, correctpassword;
	Subjects course;

}teacher[2];
struct Student
{
	int ID_student;
	string Username, correctpassword;
	Subjects course;
}stud;

void init();
bool sign_in(int&);
int main_menu_teacher();
int main_menu_stud();
void handle_teacher(int);
void handle_student();

int main()
{
	int user;

	init();
	if (sign_in(user))
	{
		switch (user)
		{
		case 1:
			handle_teacher(0);
			break;
		case 2:
			handle_teacher(1);
			break;
		case 3:
			handle_student();
			break;
		}
	}

	return 0;
}
void init()
{
	teacher[0] = { "Lina","123abc" };
	teacher[0].course.course_code = "cis160";
	teacher[1] = { "Maha","0000" };
	teacher[1].course.course_code = "cis10";
	stud = { 2023170,"Aya","2004" };
}
bool sign_in(int& user)
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

		for (int i = 0; i < 2; ++i)
		{
			if (username == teacher[i].Username && password == teacher[i].correctpassword)
			{
				cout << " login successfully\n";
				cout << " Welcome back " << teacher[i].Username << endl;
				user = i + 1;
				verified = true;
				break;
			}
		}
		if (!verified && username == stud.Username && password == stud.correctpassword)
		{
			cout << " login successfully\n";
			cout << "  Welcome back " << stud.Username << endl;
			user = 3;
			verified = true;
		}
		else if (!verified)
		{
			cout << " incorrect password or username\n ";
			verified = false;
			trials--;
			password.clear();
		}

		if (verified)
			return true;

		/*if ((username == teacher[0].Username && password == teacher[0].correctpassword) ||
			(username == teacher[1].Username && password == teacher[1].correctpassword) ||
			(username == stud.Username && password == stud.correctpassword))
		{
			cout << " login successfully\n";
			if (username == teacher[0].Username && password == teacher[0].correctpassword)
			{
				user = 1;
			}
			else if (username == teacher[1].Username && password == teacher[1].correctpassword)
			{
				user = 2;
			}
			else if (username == stud.Username && password == stud.correctpassword)
			{

				user = 3;
			}
			return true;
		}*/
		/*if (username == teacher[0].Username && password == teacher[0].correctpassword)
		{
				cout << " login successfully\n";
		}
		else if (username == teacher[1].Username && password == teacher[1].correctpassword)
		{
				cout << " login successfully\n";
		}
		else if (username == stud.Username && password == stud.correctpassword)
		{

				cout << " login successfully\n";
		}*/


	} while (!verified && trials > 0);
	cout << " You have reached the maximum number of trials, please try again \n";
	return false;


}

int main_menu_teacher() 
{
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
	cout << "Press\n"
		<< "1 --> My Profile\n" //username, password, course code, id
		<< "2 --> Select Course\n" // course code --> select test --> answer it (limited time) --> submit
		<< "3 --> View My Grades\n" // see all grades --> see grades for all subjects, course code --> see grades for just one subject
		<< "4 --> Logout :(\n"; //directed to login page
	cin >> choice;
	return choice;
}

void handle_teacher(int user)
{
	char ans;
	do
	{
		choice = main_menu_teacher();
		switch (choice)
		{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			break;
		case 6:
			sign_in(user);
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
	char ans;
	do
	{
		choice = main_menu_teacher();
		switch (choice)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			sign_in(choice);
			break;
		default:
			cout << "invalid choice please choose from 1 to 6\n";
			ans = 'y';
			continue;
		}
		//cout << "Do you want to"
		//cin >> ans;
	} while (ans == 'y' || ans == 'Y');
}
