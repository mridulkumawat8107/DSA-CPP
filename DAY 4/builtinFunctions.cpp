#include<iostream>
#include<cmath>
using namespace std;
int mini(int x, int y){
    int a;
    if(x<y) a = x;
    else a = y;
    return a ;
}
int main(){
    int  x,y;
    cin>>x>>y;
    cout<<mini(x,y)<<endl;
    cout<<min(x,y)<<endl;               // built-in function
    cout<<max(x,y)<<endl;               // built-in function
    cout<<sqrt(9)<<endl;                // built-in function
}