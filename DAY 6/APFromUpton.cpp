#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter a number = ";
    cin>>n;

    int a = 1;
    for(i=1 ; i<=n ; i++){
        cout<<a;
        cout<<" ";
        a+=2;
    }
    return 0;
}