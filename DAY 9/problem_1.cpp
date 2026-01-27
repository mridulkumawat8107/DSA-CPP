#include<iostream>
using namespace std;
int main(){
    int marks[7];
    int i;
    for(i = 0; i<=6; i++){
        cin>>marks[i];
    }
    for(i = 0; i<=6 ; i++){
        if(marks[i]<35){
            cout<<i<<endl;
        }
    }
    return  0;
}