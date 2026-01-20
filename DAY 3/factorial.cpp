#include<iostream>
using namespace std;
int main(){
    int n , i ;
    cout<<"Enter a number = ";
    cin>>n;
    int product = 1;
    for(i=1; i<=n; i++){
        product*=i;
    }
    cout<<product;
    return 0;
}