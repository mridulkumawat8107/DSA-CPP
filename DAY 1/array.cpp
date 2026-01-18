#include<iostream>
using namespace std;

int main(){

    int marks[4] = {90,91,92,93};
    cout<<"MARKS of first student = "<<marks[0]<<endl;
    cout<<"MARKS of second student = "<<marks[1]<<endl;
    cout<<"MARKS of third student = "<<marks[2]<<endl;
    cout<<"MARKS of fourth student = "<<marks[3]<<endl;

    int num[4] = {10,100,100,1000};
    for(int i=0; i<4;i++){

        cout<<"The value of num "<<i<< " is "<<num[i]<<endl;
    }

    return 0;
}