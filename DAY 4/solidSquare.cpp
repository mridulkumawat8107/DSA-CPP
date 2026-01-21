#include<iostream>
using namespace std;
int main(){
    int m,i,j;
    cout<<"Enter the number = ";
    cin>>m;

    for(i = 1; i<=m; i++){
            for(j = 1; j<=m; j++){
                cout<<"*";
            }
        cout<<endl;
    }
    return 0;
}