#include<iostream>
using namespace std;

void product(int a, int b) {
	cout << "Sum is " << (a + b);
}

void product(double a, double b) {
	cout << endl << "Sum is " << (a + b);
}

int main() {
	product(5, 7);
	cout << endl << "Function overloaded!";
	product(5.2, 7.5);
	return 0;
}
