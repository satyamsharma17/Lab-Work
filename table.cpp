#include<iostream>

using namespace std;

void table(int n, int i) {
  if (i == 11) {
    return;
  }

  cout << n << " x " << i << " = " << n * i << endl;

  table(n, i + 1);

}

int main() {
  cout << "Enter the number: " << endl;
  int n;
  cin >> n;
  table(n, 1);
  return 0;
}