#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number = ";
    cin>>n;             //taking input

    if(n%5==0 || n%3==0){
        if(n%15!=0){
        cout<<"The given number is divisible by 5 or 3 but not by 15";
        }
        else{
        cout<<"Not matching condition.";
    }
    }
    else{
        cout<<"Not matching condition.";
    }
    
    return 0;
}