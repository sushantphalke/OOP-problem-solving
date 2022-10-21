#include <bits/stdc++.h>
using namespace std;
class A {
 public:
  int a;
  void operator+(A &obj) {
    int val = this->a;
    int num = obj.a;
    cout << "output: " << val - num << endl;
  }
};
int main() {
  A s;
  s.a = 4;
  A b;
  b.a = 3;
  s + b;
  return 0;
}