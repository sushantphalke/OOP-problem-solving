#include<bits/stdc++.h>
using namespace std;

class B{
};
class S_publ : public B{};
class S_proc : protected B{};
class S_priv : private B{};

int main(){
    return 0;
}