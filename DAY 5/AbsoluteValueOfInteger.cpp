#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any integer = ";
    cin>>n;

    if(n>=0){
        cout<<"The Absolute value of given integer is "<<n<<endl;
    }
    else{
        cout<<"The Absolute value of given integer is "<<-n<<endl;
    }
    return 0;
}