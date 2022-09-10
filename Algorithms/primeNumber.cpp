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
    };
  }
  if (flag == 0) {
    cout << "number is prime" << endl;
  };

  string primestring = "";

  for (int j = 2; j <= n; j++) {
    bool flag2 = 0;
    for (int k = 2; k <= sqrt(j); k++) {
      if (j % k == 0) {
        flag2 = 1;
        break;
      }
    }

    if (flag2 == 0) {
      primestring = primestring + "," + to_string(j);
    }
  }

  cout << "Prime numbers up to " << n << " are : " << primestring << endl;
 

  return 0;
}