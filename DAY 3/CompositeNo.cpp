#include<iostream>
using namespace std;
int main(){
    int n ,i ;
    //Taking input 
    cout<<"Enter a number = ";
    cin>>n;
    //for loop
    for(i = 2; i<=n-1; i++){                            //Checks from 2,3,4,5,6,7,8,.......upto n-1
        if(n%i==0){
            cout<<n<<" is a Composite number.";
            break;
        }
        else{
            cout<<n<<" is not a Composite number.";
        }
    }
    return 0;
}