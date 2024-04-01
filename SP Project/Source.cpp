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
	getline(cin, username);
	file << username << endl;
	cout << "password:\t\t";
	correctpassword=cin.get();
	while (correctpassword!="\n"){
		cout << "*";
	correctpassword=cin.get();
	file << correctpassword << endl;
	}
	file.close();
	return 0;
}
