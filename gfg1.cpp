#include <iostream>
using namespace std;
int func(int n){
     if(n<=2)
     return n;
     return func(n-1)+func(n-2);
 }
 int main(){
     int n = func(12)%26;
     cout<< char(n+'A');
     return 0;
 }