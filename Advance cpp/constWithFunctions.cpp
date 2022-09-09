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
    // here const string is return type of function which is constant, here function is not constant
  }

  void constFuncTest() const {
    cout << name << "---printing name through the const function" << endl;
    /* // age++;
     // getName(); */
    // cannot change out of scope variables and cannot call non constant functions
    int z = 33;
    cout << "inscope decleared variable is int z= " << z << endl;
    z++;
    cout << "inscope decleared variable after increment is z= " << z << endl;
    
    // this is const function
  };

  void constFuncTest() {
    cout << name << " --printing name through the non const function" << endl;
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

  //   constant function testing

  const Dog d2;
  d2.constFuncTest();

  return 0;
}