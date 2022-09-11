#include <bits/stdc++.h>
using namespace std;

int main() {
  int number = 6;
  int myno = number;
  int m = 0;
  int n = 0;
  while ((pow(2, m)) < number) {
    m = m + 1;
    n += 1;
  }
  cout << "size of arr = " << n << endl;
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

  for (int i = n-1; i >= 0; i--) {
    cout << arr[i];
  }

  reverse(remainder.begin(), remainder.end());
  // cout << "  binary of " << myno << " is " << remainder << endl;
  return 0;
}