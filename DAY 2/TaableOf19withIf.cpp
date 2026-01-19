#include<iostream>
using namespace std;
int main(){
     int i;
     for(i=19 ; i<=190 ; i++){               // loop runs 171 times 
        if(i%19==0){                        // it is not a good method
            cout<<i<<endl;
        }
     }
    return 0;
}