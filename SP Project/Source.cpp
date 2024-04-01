#include <iostream>
#include <fstream>
#include <string >
#include <conio.h>
#include <ctime>
using namespace std;

#define Path "data\info.text"

int main() {
	string username;
	char correctpassword[];
	
	cout << "\tOnline Exam System\t\n";
	ofstream file;
        file.open (Path, ios::app | ios::out | ios::ate);

	cout << "username:\t\t";
	file << getline(cin, username);
	cout << "password:\t\t";
	correctpassword=cin.get();
	file << correctpassword;
	file.close();
	return 0;
}
