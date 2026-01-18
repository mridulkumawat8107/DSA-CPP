#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number = ";
    cin>>n;             //taking input

    if(n%5==0 || n%3==0){
        cout<<"The given number is divisible by 5 or 3";
    }
    else{
        cout<<"The given number is not divisible by 5 or 3";
    }
    return 0;
}