#include <bits/stdc++.h>
using namespace std;

class B {
 public:
  void f_publ() {
    cout << "hey there, i am public function decleared in class B" << endl;
  };

 protected:
  void f_prot() {
    cout << "hey there, i am protected function decleared in class B" << endl;
  };

 private:
  void f_priv() {
    cout << "hey there, i am private function decleared in class B" << endl;
  };
};
class S_publ : public B {
 public:
  void func() {
    f_publ();  // calling public function ----ran--- it becomes pubic function of S_publ
    f_prot();  // calling protected funtion --ran--- it becomes protected function of S_publ
    // f_priv(); non accessible private function
  };
};
class S_prot : protected B {
 public:
  void func() {
    f_publ();  // calling public function ----ran--- it becomes protected function of S_prot
    f_prot();  // calling protected funtion --ran--- it becomes protected function of S_prot
    // f_priv(); non accessible private function
  };
};
class S_priv : private B {};

int main() {
  return 0;
}