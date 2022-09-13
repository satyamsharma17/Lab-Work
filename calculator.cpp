#include<iostream>

#include<conio.h>

#include<math.h>

#include<iomanip>

char value;
using namespace std;
void sum() {

  int sum = 0;
  int n;
  int numberitems;
  cout << "Enter number of items: \n";
  cin >> numberitems;

  for (int i = 0; i < numberitems; i++) {
    cout << "Enter number " << i + 1 << ":\n";
    cin >> n;
    sum += n;
  }
  cout << "Sum is: " << sum << endl << endl;

}
void difference() {
  int diff;
  int n1, n2;
  cout << "Enter two numbers to find their difference. \n";
  cout << "\nEnter first number: ";
  cin >> n1;
  cout << "\nEnter second number: ";
  cin >> n2;
  diff = n1 - n2;
  cout << "\nDifference is: " << diff << endl << endl;
}

void product()

{
  int pro = 1;
  int n;
  int numberitems;
  cout << "Enter number of items: \n";
  cin >> numberitems;
  for (int i = 0; i < numberitems; i++) {
    cout << "\nEnter item " << i + 1 << ": ";
    cin >> n;
    pro *= n;
  }

  cout << "\nProduct is: " << pro << endl << endl;
}

void division() {
  int div;
  int n1;
  int n2;
  cout << "Enter 2 numbers to find their quotient: \n";
  cout << "\nEnter numerator: ";
  cin >> n1;
  cout << "\nEnter denominator: ";
  cin >> n2;
  div = n1 / n2;
  cout << "\nQuotient is: " << div << endl << endl;
}

void power() {
  long int p;
  int res = 1, n;
  cout << "Enter number: ";
  cin >> n;
  cout << "\nEnter power: ";
  cin >> p;
  for (int i = 1; i <= p; i++) {
    res = n * res;
  }
  cout << "\n" << n << " Power " << p << " is: " << res << endl;
}

void sqareroot() {
  float s;
  int n;
  cout << "Enter number to find its square root: ";
  cin >> n;
  s = sqrt(n);
  cout << "\nSquare root of " << n << " is: " << s << endl;
}

void factorial() {
  long int f = 1;
  int c = 1, n;
  cout << "Enter number to find its factorial: ";
  cin >> n;
  while (c <= n) {
    f = f * c;
    c += 1;
  }
  cout << "\nFactorial of " << n << " is: " << f << endl;
}
void exponential() {
  long double res = 1, p;
  double e = 2.718281828;
  cout << "Enter power of exponential function: ";
  cin >> p;
  for (int i = 1; i <= p; i++) {
    res = e * res;
  }
  cout << "\ne^ " << p << " is: " << res << endl;

}
int main() {

  system("cls");
  do {

    system("pause");
    system("cls");
    cout << "Which operation you want to perform?\n";
    cout << "Press 0 for exit.\n";
    cout << "Press 1 for addition.\n";
    cout << "Press 2 for subtraction.\n";
    cout << "Press 3 for multiplication.\n";
    cout << "Press 4 for division.\n";
    cout << "Press 5 for power calculation.\n";
    cout << "Press 6 for square root.\n";
    cout << "Press 7 for factorial calculation.\n";
    cout << "Press 8 for exponential calculation.\n";
    cout << "Press option: ";
    cin >> value;
    switch (value) {
    case '1':
      sum();
      break;

    case '2':
      difference();
      break;

    case '3':
      product();
      break;

    case '4':
      division();
      break;

    case '5':
      power();
      break;

    case '6':
      sqareroot();
      break;

    case '7':
      factorial();
      break;

    case '8':
      exponential();
      break;

    case '0':
      exit(0);
    default:
      cout << "Invalid Input";
      system("cls");
    }
  }

  while (value != '0');

  getch();
}