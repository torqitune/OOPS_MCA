#include<iostream>
using namespace std;

void swap(int a, int b){                    //call by value
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"Inside swap function:  A = "<<a<<", B = "<<b<<endl;
}

void swap_ref(int &a,int &b){               //call by refrence
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"Inside swap function:  A = "<<a<<", B = "<<b<<endl;

}

int main(){
    int a,b;
    cout<<"Enter 1st value : ";
    cin>>a;
    cout<<"Enter 2nd value : ";
    cin>>b;
    cout<<"\n***CALL BY VALUE***\n";
    cout<<"Before swapping:  A = "<<a<<", B = "<<b<<endl;
    swap(a,b);
    cout<<"After swapping:  A = "<<a<<", B = "<<b<<endl;

    cout<<"\n\n***CALL BY REFRENCE***\n";
    cout<<"Before swapping:  A = "<<a<<", B = "<<b<<endl;
    swap_ref(a,b);
    cout<<"After swapping:  A = "<<a<<", B = "<<b<<endl;





}