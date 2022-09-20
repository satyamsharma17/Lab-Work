#include<iostream>
using namespace std;

class student {
	string roll;
	string firstname;
	string lastname;
	int fee;
	
	public:
		student() {
			cout << "Enter the roll number: ";
			cin >> roll;
			
			cout << "Enter the name of student: ";
			cin >> firstname;
			cin >> lastname;
			
			cout << "Enter the program fees: ";
			cin >> fee;
		}
		
		void show() {
			cout << "Roll No. of student is " << roll << ".";
			cout << endl << "Name of the student is " << firstname << " " << lastname << ".";
			cout << endl << "Fee of the program is " << fee << ".";
		}
};

int main() {
	student example;
	example.show();
	
	return 0;
}
