#include <bits/stdc++.h>
using namespace std;

int toDecimal(int n) {
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
  return decimal;
};
int toBinary(int number) {
  int myno = number;
  int m = 0;
  int n = 0;
  while ((pow(2, m)) < number) {
    m = m + 1;
    n += 1;
  }
  //   cout << "size of arr = " << n << endl;
  int arr[n] = {};
  string remainder;

  for (int i = 0; i < n; i++) {
    if (number % 2 == 0) {
      number = number / 2;
      arr[i] = 0;
      remainder += '0';
      continue;
    }
    if (number % 2 == 1) {
      number = floor(number / 2);
      arr[i] = 1;
      remainder += '1';
      continue;
    }
  }
  int finalnumber = 0;
  for (int i = n - 1; i >= 0; i--) {
    // cout << arr[i];
    if (arr[i] == 0) {
      finalnumber = finalnumber * 10;
    }
    if (arr[i] == 1) {
      finalnumber = finalnumber * 10 + 1;
    }
  }
  //   cout <<endl<< finalnumber << endl;
  //   reverse(remainder.begin(), remainder.end());  // for string output;
  return finalnumber;
}

int addBinary(int n, int m) {
  int tempSum = toDecimal(n) + toDecimal(m);
  return toBinary(tempSum);
}

int main() {
  int n, m;
  cout << "Enter a binary numbers to to add : ";
  cin >> n;
  cin >> m;
  int sum = addBinary(m, n);
  cout << "sum of given binaries: " << sum << " in decimal it is " << toDecimal(m) << " + " << toDecimal(n) << " = " << toDecimal(sum);
}