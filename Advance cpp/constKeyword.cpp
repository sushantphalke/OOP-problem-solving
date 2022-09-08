#include <bits/stdc++.h>
using namespace std;

int main() {
  const int i = 9;
  const int* p1 = &i;
  cout << "printed with direct name of pointer " << p1 << endl;
  cout << "actual location of pointer p :  " << &p1 << endl
       << "value of variable stored in pointer : " << *p1 << endl
       << " memory address of the variable : " << &i << endl;
  p1++;
  cout << "printed increment with name of pointer " << p1 << endl;
  cout << "value of i = " << i << endl;
  *p1++;
  cout << "printed increment with data of pointer " << *p1 << " address :" << p1 << endl;

  cout << "***********************************" << endl;
  int j = 7;
  const int k = 8;
  int* const p2 = &j;        // pointer address is constant but data is not.
  const int* const p3 = &j;  // pointer address and data both are constant.
  int const* p4 = &k;        // data is constat but pointer address is not.
                             // if const is on left of * then data is constant.
                             // if const is on right of * then pointer is constant.

  cout << "***********************************" << endl;
  // changing constant to modifyable var and vice versa

  cout << "constant var k = " << k << endl;
  cout << "constant var is changed to static and modified for perticular iteration of condition" << endl;
  cout << "modified value var k = " << (const_cast<int&>(k) = 9) << endl;
  cout << "data in variable j = " << j << endl;
  cout << "satic variable is changed to constant for perticular iteration of condition" <<endl;
  cout << "const value var j = " << (static_cast<const int&>(j)) << endl;

      return 0;
}