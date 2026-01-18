#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter any number = ";
    cin>>n;
    if(n%2 == 0){
        cout<<"The given number is even.";
    }
    else{
        cout<<"The given number is odd.";
    }
    return 0;
}