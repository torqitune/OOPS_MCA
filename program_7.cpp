#include<iostream>
using namespace std;
class complex{
    int real;
    int imag;
    friend complex operator - (complex &obj1, complex &obj2);

    public:

    complex(int a = 0 , int b = 0){         //parameterized constructor, if nothing is passed then default values will be 0 , temp has not been initialized so it will be 0 when declared.
        real = a;
        imag = b;
    }

    complex operator + (complex &obj){      //this fucntion is invoked by n1 and the parameter passed is n2. This is a member function.
        complex temp;                       //a temporary complex variable.
        temp.real = real + obj.real;        // performing operations
        temp.imag = imag + obj.imag;
        return temp;                        //returning it.
    }

    void display();
};

void complex :: display(){
    if(imag<0)
        cout<<"Complex No: "<<real<<" "<<imag<<"j"<<endl;
    else
        cout<<"Complex No: "<<real<<" + "<<imag<<"j"<<endl;

}

complex operator - (complex &obj1, complex &obj2){      //this is just a normal function which is friend fucntion so that it can acces
    complex temp;                                       //also this fucntion's scope is outside the class so it cannot be invoked by an object , therefore we have to pass 2 parameters separately and call the function as normally we do.
    temp.real = obj1.real - obj2.real;                  //friend fucntion cannot access private members of class, it need objects to access them , so obj1 and obj2 here are accessing private members.
    temp.imag = obj2.imag - obj2.imag;
    return temp;
}

int main(){
    complex n1(2,4) , n2(3,5) , n3;
    cout<<"1st : ";
    n1.display();
    cout<<endl;
    cout<<"2nd : ";
    n2.display();

    n3 = n1 + n2;
    cout<<"\n**Member function + called**\n";
    n3.display();

    n3 = n1 - n2;
    cout<<"\n\n**Friend function - called**\n";
    n3.display();


    return 0;
}