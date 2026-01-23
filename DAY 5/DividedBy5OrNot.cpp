#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter a positive number = ";
    cin>>n;

    if(n%5 == 0){
        cout<<"The given positive integer is divisible by 5.";
    }
    else{
        cout<<"The given positive integer is not divisible by 5.";
    }
    return 0;
}