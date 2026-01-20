#include<iostream>
using namespace std;
int main(){
    int a,b,i;
    //only for a>=0 and b>=0
    cout<<"Enter Base = ";
    cin>>a;
    cout<<"Enter Exponent = ";
    cin>>b;

    bool flag = true;  //means power is positive
    if(b<0){
        flag = false;    //means power is negative
        b = -b;         // makes b positive
    }
    float power = 1;
    for(i = 1; i<=b ;i++){
        power*=a;
    }
    if(flag==false){
        power = 1/power;
        b = -b;
    }
    if(a==0 && b==0){
        cout<<"NOT DEFINED";
    }
    else{
        cout<<""<<a<<" to the power "<<b<<" is "<<power;
    }
    return 0;
}