#include <iostream>
#include <string >
#include <conio.h>
#include <ctime>
using namespace std;
int user;
int choice;
char ans;
struct Subjects
{
    string course_code[2];
    string course_name[2];
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
struct exam
{
    string examText[4];
    string examAnswer[4];
}exist_Exam;

void init();
void initExam();
void edit_exam();
bool sign_in();
void check_user();
int main_menu_teacher();
int main_menu_stud();
void handle_teacher();
void handle_student();
void profile_teach();
void profile_stud();
void select_course();
void view_grades();

int main()
{
    cout << "\n\t\t * Online Exam System *\n";
    cout << "\t\t-------------------------------------\n\n";
    init();
    if (sign_in())
        check_user();

    return 0;
}
void init()
{
    teacher[0] = { "Lina","1234" };
    teacher[0].course.course_name[0] = "Structured programming";
    teacher[0].course.course_code[0] = "spcis";
    teacher[1] = { "m","0" }; //Maha 0000
    teacher[1].course.course_name[1] = "History";
    teacher[1].course.course_code[1] = "hicis";
    stud = { 2023170,"a","2" }; //Aya 2004
}

bool sign_in()
{

    string username, password;
    int trials = 3;
    bool verified = false;

    do
    {
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
                cout << "\n\t\tlogin successfully\n";
                cout << " \t\tWelcome back " << teacher[i].Username << endl;
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

void check_user()
{

    switch (user)
    {
    case 1:
        handle_teacher();
        break;
    case 2:
        handle_teacher();
        break;
    case 3:
        handle_student();
        break;
    }
}

int main_menu_teacher()
{
    int choice;
    cout << "Press...\n"
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

void initExam()
{
    exist_Exam.examText[0] = "What is the capital of Egypt?\n";
    exist_Exam.examText[1] = "What is the area of Egypt?\n";
    exist_Exam.examText[2] = "How many governments in Egypt?\n";
    exist_Exam.examText[3] = "When is the 6th October war?\n";
    exist_Exam.examAnswer[0] = "Cairo\n";
    exist_Exam.examAnswer[1] = "98 km2\n";
    exist_Exam.examAnswer[2] = "27\n";
    exist_Exam.examAnswer[3] = "1973\n";
}
void edit_exam()
{
    char again;
    string edited_quistion[4], edited_answer[4];  //I'll take from user the edit of the quistion or the answer
    initExam();
    int ques_ill_edit;
    cout << "Choose the question that you want to edit:\n";
    cout << "1-" << exist_Exam.examText[0] << "\nThe answer:\n\t";
    cout << exist_Exam.examAnswer[0] << "\n";
    cout << "2-" << exist_Exam.examText[1] << "\nThe answer:\n\t";
    cout << exist_Exam.examAnswer[1] << "\n";
    cout << "3-" << exist_Exam.examText[2] << "\nThe answer:\n\t";
    cout << exist_Exam.examAnswer[2] << "\n";
    cout << "4-" << exist_Exam.examText[3] << "\nThe answer:\n\t";
    cout << exist_Exam.examAnswer[3] << "\n";
    do
    {
        cout << ":--->";
        cin >> ques_ill_edit;
        switch (ques_ill_edit)
        {
        case 1:
        {
            cout << "Enter the edit for the 1st question:\n";
            cin >> edited_quistion[0];
            exist_Exam.examText[0] = edited_quistion[0];
            cout << "Enter the edit for the 1st answer:\n";
            cin >> edited_answer[0];
            exist_Exam.examAnswer[0] = edited_answer[0];
            break;
        }
        case 2:
        {
            cout << "Enter the edit for the 2nd question:\n";
            cin >> edited_quistion[1];
            exist_Exam.examText[1] = edited_quistion[1];
            cout << "Enter the edit for the 2nd answer:\n";
            cin >> edited_answer[1];
            exist_Exam.examAnswer[1] = edited_answer[1];
            break;
        }
        case 3:
        {
            cout << "Enter the edit for the 3rd question:\n";
            cin >> edited_quistion[2];
            exist_Exam.examText[2] = edited_quistion[2];
            cout << "Enter the edit for the 3rd answer:\n";
            cin >> edited_answer[2];
            exist_Exam.examAnswer[2] = edited_answer[2];
            break;
        }
        case 4:
        {
            cout << "Enter the edit for the 4th question:\n";
            cin >> edited_quistion[3];
            exist_Exam.examText[3] = edited_quistion[3];
            cout << "Enter the edit for the 4th answer:\n";
            cin >> edited_answer[3];
            exist_Exam.examAnswer[3] = edited_answer[3];
            break;
        }
        }
        cout << "Do you want to edit another question? (Y / N)\n";
        cin >> again;
    } while (again == 'y' || again == 'Y');
}

void handle_teacher()
{
    do
    {
        choice = main_menu_teacher();
        switch (choice)
        {
        case 1:
            profile_teach();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            edit_exam();
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
    cout << " Username :\t\t" << teacher[user - 1].Username << endl;
    cout << " Password :\t\t" << teacher[user - 1].correctpassword << endl;
    cout << " Course Code :\t\t" << teacher[user - 1].course.course_code[user - 1] << endl;

}
void profile_stud()
{
    cout << " ID:\t\t" << stud.ID_student << endl;
    cout << " Username :\t\t" << stud.Username << endl;
    cout << " Password :\t\t" << stud.correctpassword << endl;
    for (int i = 0; i < 2; i++)
        if (!stud.course.course_name[i].empty())
            cout << " Course Name:\t\t" << stud.course.course_name[i] <<
            "\t\t" << teacher[i].course.course_code[i] << endl;


}

void select_course()
{
    int choice;
    char ans;
    do
    {
        cout << "Press...\n";
        for (int i = 0; i < 2; i++)
            cout << i + 1 << " --> " << teacher[i].course.course_name[i] <<
            "\t" << teacher[i].course.course_code[i] << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            stud.course.course_name[0] = "Structured programming";
            break;
        case 2:
            stud.course.course_name[1] = "History";
            break;
        default:
            cout << "Invalid choice, please choose 1 or 2\n";
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
    cout << "Press\n"
        << "1 --> View All Your Grades " << endl
        << "2 --> View Structured Programming grade " << endl
        << "3 --> View History grade" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    default:
        cout << "Invalid choice, please choose from 1 to 3";
            break;
    }
}
