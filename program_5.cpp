#include<iostream>
using namespace std;
class student{
    string name;
    int age;
    string *roll;

    public:
    student(){      //default constructor 
        cout<<"NO-Argument constructor called.\n"<<endl;
    }
    student(int a){     //one argument constructor
        cout<<"One-Arugument constructor called.\n";
        cout<<"Argument-1 : "<<a<<endl<<endl;
    }
    student(string a, int b){   //two argument constructor
        name = a;
        age = b;
        roll = new string("23");    //dynamic memory allocation to roll.
        cout<<"Two-Arugument constructor called\n";
        cout<<"Arguemtn-1 : "<<a<<endl;
        cout<<"Argument-2 : "<<b<<endl;
        cout<<"Roll : "<<*roll<<endl<<endl;

    }
    student(student &obj){  //copy constructor
        name = obj.name;
        age = obj.age;
    }
    void display(){
        cout<<"Copy constructor called\n";
        cout<<"Arguemtn-1 : "<<name<<endl;
        cout<<"Argument-2 : "<<age<<endl<<endl;
    }
};
int main(){
    student aaryan;
    student mohit(22);
    student deshna("Class Representative",22);
    student ankit(deshna);
    ankit.display();
    student anamika("HOD",22);
    return 0;
}