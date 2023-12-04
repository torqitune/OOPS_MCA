#include<iostream>
#include<cmath>
using namespace std;

int power(int m,int n){                             //handles integer parameter.
    return pow(m,n);
}

double power(double m,int n){                       //handles double parameter.
    return pow(m,n);
}

int main(){
    int m,n;
    double a;
    cout<<"Enter Integer value of m : ";
    cin>>m;
    cout<<"Enter double value of m : ";
    cin>>a;
    cout<<"Enter value of n : ";
    cin>>n;
    cout<<"\nInteger function call : "<<power(m,n);                         //calling function for integer m.
    cout<<"\n\nInteger function call : "<<power(a,n);                       //calling function for double m.
    return 0;
}