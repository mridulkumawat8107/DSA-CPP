#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    if(n>=100 && n<=999){
        cout<<"You entered a three digit number.";
    }
    else{
        cout<<"Not a three digit number.";
    }
    return 0;
}