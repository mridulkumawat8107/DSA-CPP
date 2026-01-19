#include<iostream>
using namespace std;
int main(){
    int n , i ,a = 1;
     cout<<"Enter a number = ";
     cin>>n;
    for(i=1; i<=n; i++){
        cout<<a<<endl;
        a = a*2 ;
    }
    return 0;
}