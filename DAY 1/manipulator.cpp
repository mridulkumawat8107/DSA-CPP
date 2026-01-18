#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a = 1 , b = 10 , c = 100 , d = 1000 ;

    //without "setw" manipulator

    cout<<"the value of a = "<<a<<endl;
    cout<<"the value of b = "<<b<<endl;
    cout<<"the value of c = "<<c<<endl;
    cout<<"the value of d = "<<d<<endl;

    // with  "setw manipulator"
    
    cout<<"the value of a = "<<setw(4)<<a<<endl;
    cout<<"the value of b = "<<setw(4)<<b<<endl;
    cout<<"the value of c = "<<setw(4)<<c<<endl;
    cout<<"the value of d = "<<setw(4)<<d<<endl;
    
    return 0;
}