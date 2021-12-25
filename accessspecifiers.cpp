#include <iostream>
using namespace std;

// Base class
class Employee  {
   

  protected:  // Protected access specifier
    int salary; 
    int managersalary ;

};

 
// Derived class
class Programmer: protected Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
        managersalary = 2*salary;
    }
    int getmanagersalary() {
      return managersalary ;
    }
    int getSalary() {
      return salary  ;
    }
    
};

int main() {
  Programmer myObj;
  myObj.setSalary(50000);
  myObj.bonus = 15000;
  cout << "employee Salary: " << myObj.getSalary()<<endl
  <<"manager salary : "<<myObj.getmanagersalary()<< "\n";
  cout << "Bonus: " << myObj.bonus << "\n";

int x =10;
    if (x!=9){
        cout<<x--;
    }
    
    
  return 0;
}
