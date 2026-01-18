#include<iostream>
using namespace std;
int main (){
    int a, b, c;
    cout<<"Enter the first number = ";
    cin>>a;

    cout<<"Enter the second number = ";
    cin>>b;

    cout<<"Enter the third number = ";
    cin>>c;

    if(a>b){
        if(a>c){
            cout<<"The first number is greatest that is "<<a<<endl;
        }
        else{
            cout<<"The third number is greatest that is "<<c<<endl;
        }
    }
    else if(b>c){
            cout<<"The second number is greatest that is "<<b<<endl;
    }
    else{
            cout<<"The third number is greatest that is "<<c<<endl;
    }
    return 0;
}