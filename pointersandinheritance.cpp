#include<iostream>
using namespace std;


void pointercreation(){
    int*p  ;
    int s=7;
    p=&s;
cout<<"actual location of pointer p :  "<<&p<<endl
<<"now after pointing to a variable memory location is :   "<< p<<endl
<<"value of variable stored in pointer : "<<*p<<endl
<< " memory address of the variable : " <<&s<<endl;

}
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)

};
// Base class
class Vehicle {
  public: 
    string brand = "Ford";
    void honk() {
      cout <<"car horn sound :"<< "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {  //here all public data members of vehicle are accessed 
  public: 
    string model = "Mustang";
};


int main(){

    pointercreation();

    MyClass myObj;  // Create an object of MyClass
     // Access attributes and set values
        myObj.myNum = 15; 
        myObj.myString = "Some text";
     // Print attribute values
        cout <<"value of Mynum stored in myObjrect : " << myObj.myNum << "\n";
        cout << myObj.myString<<endl;

    Car myCar;
    myCar.honk();
    cout << "car: "<< myCar.brand + " " + myCar.model;

    return 0 ;
}