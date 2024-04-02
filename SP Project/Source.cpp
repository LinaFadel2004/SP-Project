#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
#include <ctime>

using namespace std;

#define info_path "data/info.txt"

void sign_up(string, string);

int main() {
    string username;
    string password = "";
    cout << "\t\t Online Exam System \t\t\n";
    cout << "\t\t ------------------ \t\t\n";
    sign_up(username, password);

}

void sign_up(string username, string password) {
    cout << "username: ";
    getline(cin, username);
    cout << "password: ";
    char ch;
    while ((ch = _getch()) != '\r')
    {
        if (ch == '\b')
        {
            if (!password.empty()) {
                cout << "\b \b"; // Move cursor back and erase character
                password.pop_back(); // Remove last character from password
                cout.flush(); // Flush the output buffer
            }
        }
        else {
                cout << "*";
                password += ch;
            }
    }
        ofstream myfile;
        myfile.open(info_path, ios::out | ios::app); //out:أقدر أكتب فيه ,app:لما افتح الملف للمرة التانية الاقي البيانات محفوظة
        if (myfile.is_open())
        {
            myfile << username << endl;
            myfile << password << endl;
            myfile.close();
        }
        else
            cout << "Error: Unable to open file." << endl;

    }
