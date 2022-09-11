#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cout << "Enter a number to check as Armstrong : ";
  cin >> n;
  int s=n;
  int lastDigit = 0;
  int cubeSum = 0;
  while (n > 0) {
    lastDigit = n % 10;
    cubeSum = cubeSum + pow(lastDigit, 3);
    n = n / 10;
  };
  if (cubeSum == s)
    cout << "number " << s << " is Armstrong number" << endl;

  else
    cout << "number " << s << " is not Armstrong number" << endl;
}