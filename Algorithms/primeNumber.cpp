#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cout << "Enter number: ";
  cin >> n;

  bool flag = 0;
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      cout << "number is not prime" << endl;
      flag = 1;
      break;
    }
  }
  if (flag == 0) {
    cout << "number is prime" << endl;
  }

  string primestring;
  for (int j = 0; j <= n; j++) {
    bool flag = 0;
    for (int i = 2; i <= sqrt(n); i++) {
      if (n % i == 0) {
        flag = 1;
        break;
      }
    }
    if (flag == 0) {
    }
  }
  return 0;
}