#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  //   cout << "Enter a number to Reverse: ";
  cin >> n;
  int reverse = 0;
  int lastDigit = 0;

  while (n > 0) {
    lastDigit = n % 10;
    reverse = reverse * 10 + lastDigit;
    n = n / 10;
  }
  //   cout << "reversed number is: " << reverse << endl;
  cout << reverse;
}