#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a = ";
    cin>>a;
    cout<<"Enter the value of b = ";
    cin>>b;

    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"The value of a = "<<a<<" and the value of b = "<<b<<" after swapping.";
    return  0;
}