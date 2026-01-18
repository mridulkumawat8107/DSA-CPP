#include<iostream>
using namespace std;
int main(){
    int marks ;
    cout<<"Enter your marks = ";
    cin>>marks;

    if(marks>=91){
        cout<<"Excellent";
    }
    else if(marks>=81 && marks<=90){
        cout<<"Very Good";
    }
    else if(marks>=71 && marks<=80){
        cout<<"Good";
    }
    else if(marks>=61 && marks<=70){
        cout<<"Can do better";
    }
    else if(marks>=51 && marks<=60){
        cout<<"Average";
    }
    else if(marks>41 && marks<=50){
        cout<<"Below average";
    }
    else{
        cout<<"fail";
    }
    return 0;
}