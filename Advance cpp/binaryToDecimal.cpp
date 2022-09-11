#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cout << "Enter a binary number to convert into decimal: ";
  cin >> n;
  int decimal = 0;
  int lastDigit = 0;
  int i = 0;
  while (n > 0) {
    lastDigit = n % 10;
    if (lastDigit == 1) {
      decimal = decimal + pow(2, i);
    }
    n = n / 10;
    i++;
  }
  cout << "Decimal number is: " << decimal << endl;
}