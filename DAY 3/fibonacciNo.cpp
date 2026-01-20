#include<iostream>
using namespace std;
int main(){
    int n , a = 1 , b = 1 , sum = 0;
    int i;
    cout<<"Enter a number = ";
    cin>>n;

    for(i = 1; i<=n-2; i++){
        sum = a+b ;
        a = b;
        b = sum;
    }
    cout<<b;
    return 0;
}