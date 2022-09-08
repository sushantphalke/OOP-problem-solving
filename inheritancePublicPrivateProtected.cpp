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
 using B::f_prot;
  void func() {
    f_publ();  // calling public function ----ran--- it becomes pubic function of S_publ
    f_prot();  // calling protected funtion --ran--- it becomes protected function of S_publ
    // f_priv(); non accessible private function
  };
};
class S_prot : protected B {
 public:
 using B ::f_publ;
  void func() {
    f_publ();  // calling public function ----ran--- it becomes protected function of S_prot
    f_prot();  // calling protected funtion --ran--- it becomes protected function of S_prot
    // f_priv(); non accessible private function
  };
};
class S_priv : private B {
    public:
    using B::f_prot;
  void func() {
    f_publ();  // calling public function ----ran--- it becomes private function of S_priv
    f_prot();  // calling protected funtion --ran--- it becomes private function of S_priv
    // f_priv(); // non accessible private function
  };
};

int main() {
S_publ s1;
s1.f_publ();
s1.f_prot(); 

S_prot s2;
s2.f_publ();

S_priv s3;
s3.f_prot();


  return 0;
}