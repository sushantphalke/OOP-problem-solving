#include <bits/stdc++.h>
using namespace std;

int add(int x, int y, int a = 0, int z = 0) {
  return (x + y + z + a);
};
// int add(int x ,int y){
//     return (x+y);
// }

int main() {
  cout << add(3, 4, 3, 3) << endl;
  cout << add(3, 4);

  return 0;
}