#include<iostream>
using namespace std;
int main (){
    int a,b;
    cout<<"Enter the 1st number = ";
    cin>>a;

    cout<<"Enter the 2nd number = ";
    cin>>b;

    a = a + b ;
    b = a - b ;
    a = a - b ;
    cout<<"The exchanged value of a = "<<a;
    cout<<"\nThe exchanged value of b = "<<b;

    return 0;
}