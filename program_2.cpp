#include<iostream>
using namespace std;

float si(int p,int t,int r = 10){
    return (float)(p*r*t)/100;
}


int main(){
    int p,r,t;
    cout<<"Enter Principal amount : ";
    cin>>p;
    cout<<"Enter Rate amount : ";
    cin>>r;
    cout<<"Enter time : ";
    cin>>t;

    cout<<"\nWithout defualt Argument S.I : "<<si(p,r,t)<<endl;
    cout<<"\nWith default Argument S.I : "<<si(p,r)<<endl;
    return 0;
}