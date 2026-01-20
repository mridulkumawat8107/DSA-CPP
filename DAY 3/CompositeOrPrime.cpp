#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter a number = ";
    cin>>n;
    bool flag = true;   ////    true MEANS PRIME VALUE 
    for(i = 2 ; i<=n-1 ; i++){
        if(n%2==0){
            flag = false ;  ////    false MEANS COMPOSITE
            break;
        }
    }
    if(n==1){
        cout<<n<<" neither Prime nor Composite.";
    }
    else if(flag==true){
        cout<<n<<" is a Prime number.";
    }
    else{
        cout<<n<<" is Composite number.";
    }
    return 0;
}