#include<iostream>
using namespace std;
int main (){
    float cp;
    cout<<"Enter the Cost Price = ";
    cin>>cp;

    float sp;
    cout<<"Enter the Selling Price = ";
    cin>>sp;

    float profit = sp - cp;
    float lose = cp - sp;

    if(sp>cp){
        cout<<"You have profit of "<<profit<<endl;
       
    }
    else if(sp = cp){
        cout<<"You have neither profit nor lose";
    }
    else{
        cout<<"You have lose of "<<lose<<endl;
    }
    return 0;
}