#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;             //taking input

    if(n%5==0 && n%3==0){
        cout<<"The given number is divisible by both 5 and 3";
    }
    else{
        cout<<"The given number is not divisible by both 5 and 3";
    }
    return 0;
}