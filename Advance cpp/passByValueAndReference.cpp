#include <bits/stdc++.h>
using namespace std;

void swapTestByValue(int a, int b) {
//   cout << a << "  ," << b << endl;
  int temp = a;
//   cout << temp << endl;
  a = b;
//   cout << a << endl;
  b = temp;
  cout << "After swap try by value the value of s is " << a << " and the value of p is : " << b << " which are swaped in function but they are copy values not origanl varables so noting going to change outside scope of this function <- this is printed from function itself...." << endl;
  //   the value of a and b are going to swap but only in this function outside this function they are reall not
  //     swaped because here we get values and doing operation we are not setting orignal variable values
  //  thats why concept of pass by value and pass by reference important.
};
void swapTestByReference(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
  cout << "After swap by reference the value of s is " << *a <<" (address: "<< a <<')' << " and the value of p is : " << *b <<" (address: "<< b <<')'<< endl;
}

int main() {
  int s = 4, p = 5;
  cout << "Before swap the value of s is " << s <<" (address: "<< &s <<')'  << " and the value of p is : " << p <<" (address: "<< &p <<')'  << endl;
  swapTestByValue(s, p);  // here swapping is not possiblr because it send copy of values to the function not actual variables so how actual variables are going to change, they will not change...
  cout << "After swap try by value the value of s is " << s << " and the value of p is : " << p << " which are not swaped <- this is printed from main function" << endl;

  swapTestByReference(&s, &p);
  // swapping is possible due to the pass by reference which sends actual address of variable to the function not copy of value
  return 0;
}