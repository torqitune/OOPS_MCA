#include<iostream>
using namespace std;
class complex{
    int real;
    int imag;
    public:
    void setVal(){
        cout<<"Enter real part : ";
        cin>>real;
        cout<<"Enter imaginary part : ";
        cin>>imag;
    }
    void display();
    void addReal(int a);
    void subReal(int a);
    void addImag(int a);
    void subImag(int a);
};
void complex :: display(){
    if(imag>=0)
        cout<<"\nComplex no : "<<real<<" + "<<imag<<"j"<<endl;
    else    
        cout<<"\nComplex no : "<<real<<" "<<imag<<"j"<<endl;
    
}
void complex :: addReal(int a){
    real = real + a; 
}
void complex :: subReal(int a){
    real = real - a;
}
void complex :: addImag(int a){
    imag = imag + a;
}
void complex :: subImag(int a){
    imag = imag -a;
}
void menu(){
    cout<<"\n*****COMPLEX*****";
    cout<<"\n1.Show complex no. : ";
    cout<<"\n2.Add to real part : ";
    cout<<"\n3.Subtract to real part : ";
    cout<<"\n4.Add imaginery part : ";
    cout<<"\n5.Subtract imaginery part : ";
    cout<<"\n6.Exit : ";

}
int main(){
    complex obj1;
    obj1.setVal();
    obj1.display();

    int choice;

    menu:
    menu();

    cout<<"\n\nEnter choice : ";
    cin>>choice;
    if(choice==1){
        obj1.display();
        goto menu;
    }
    else if(choice==2){
        int temp;
        cout<<"\nEnter data to be added : ";
        cin>>temp;
        obj1.addReal(temp);
        obj1.display();
        goto menu;
    }
    else if(choice==3){
        int temp;
        cout<<"Enter data to be subtracted : ";
        cin>>temp;
        obj1.subReal(temp);
        obj1.display();
        goto menu;
    }
    else if(choice==4){
        int temp;
        cout<<"\nEnter data to be added : ";
        cin>>temp;
        obj1.addImag(temp);
        obj1.display();
        goto menu;
    }
    else if(choice==5){
        int temp;
        cout<<"Enter data to be subtracted : ";
        cin>>temp;
        obj1.subImag(temp);
        obj1.display();
        goto menu;
    }
    else{
        cout<<"\nProgram Terminated";
        return 0;
    }

    return 0;
}