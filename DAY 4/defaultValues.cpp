#include<iostream>
using namespace std;
int f(int x = 10, int y = 15){                  //x and y has passed default values 
    cout<<x<<" "<<y<<endl;
}
int main(){
    f(4,6);                                    //overrides the value of x and y 
}