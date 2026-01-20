#include<iostream>
using namespace std;
int main(){
    int n , count = 0;
    cout<<"Enter a number = ";
    cin>>n;
    int a = n;
    while(n>0){
        n=n/10;
        count++;
    }
    if(a==0){
        cout<<"The given number has 1 no. of digit";
    }
    else{
        cout<<"The given number has "<<count<<" no. of digit";
    }
    return 0;
}