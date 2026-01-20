#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter a number = ";
    cin>>n;

    for(i = 2; i<=n-1; i++){
        if(n%i!=0){
            cout<<n<<" is a Prime number."<<endl;
            break;
        }
        else{
            cout<<n<<" is not a Prime number."<<endl;
            break;
        }
    }
    return 0;
}