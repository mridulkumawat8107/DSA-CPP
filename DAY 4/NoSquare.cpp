#include<iostream>
using namespace std;
int main(){
    int n, i ,j;
    cout<<"Enter a number = ";
    cin>>n;
    int m = 0;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            m+=1;
            cout<<m;
        }
        m =0;
        cout<<endl;
    }
    return 0;
}