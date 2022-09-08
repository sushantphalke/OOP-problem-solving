#include <bits/stdc++.h>
using namespace std;

class Dog {
 public:
  int age;
  string name;

 public:
  Dog() {
    age = 6;
    name = "bunny";
  }
  void setAge(const int& a) {
    age = a;
  }
  // returning string by reference

  const string& getName() {
    return name;
    // here const string is return type of function which is constant not here function is constant
  }

  void constFuncTest() const {
    cout << name << " const name returned by const function" << endl;
    /* // age++;
     // getName(); */
    // cannot change out of scope variables and cannot call non constant functions
    int z = 33;
    cout << "inscope decleared variable is int z= " << z << endl;
    z++;
    cout << "inscope decleared variable after increment is z= " << z << endl;
  };
};

int main() {
  Dog d;
  int newAge = 4;
  d.setAge(newAge);

  cout << "upadted age of " << d.name << " is " << d.age << endl;

  const string& n = d.getName();
  cout << "name of object returned by string reference funtion is : " << n << endl;

  d.constFuncTest();

  return 0;
}