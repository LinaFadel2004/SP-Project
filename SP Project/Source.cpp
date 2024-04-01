#include <iostream>
#include <fstream>
#include <string >
#include <conio.h>
#include <ctime>
using namespace std;
string Path = "data\info.text";
int main() {
	
	cout << "\tOnline Exam System\t\n";
        ofstream file (Path, ios::app | ios::out | ios::ate);
	return 0;
}
