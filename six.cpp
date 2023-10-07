//reverse the number
#include<iostream>
using namespace std;
int main(){
    int m, count=0,d;
    cout<<"Number daalo";
    cin>>m;
    //simplest way i can think of is just priniting the digits in reverse order 
    cout<<"reverse of the number is/t";
    while(m>0){
        d=m%10; 
        cout<<d;
        m=m/10;
        
    }
}