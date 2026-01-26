#include<iostream>
using namespace std;
int main(){
    int i ,a = 100;
    for(i = 1; i<=34; i++){
            cout<<a<<endl;
            a-=3;
    }
        // Alternate Method
    for(i = 1; a>0; i++){
            cout<<a<<endl;
            a-=3;
    }
    return  0;
}