#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter the first number a = ";
    cin>>a;

    cout<<"Enter the second number b = ";
    cin>>b;

    cout<<"Enter the third number c = ";
    cin>>c;

    if((a+b>c) && (a+c>b) && (b+c>a)){
        cout<<"Yes they can be a side of triangle";
    }
    else{
        cout<<"they can't be a side of a triangle";
    }

    return 0;
}