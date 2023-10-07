//print number of digits of entered number
#include<iostream>
using namespace std;
int main(){
    int m, d;
    cout<<"Number daalo";
    cin>>m;
    if(m>=1 && m<1000000000){
        cout<<"miskay muska minney mouse";
        int count=0;
        while(m>0){
            d=m%10; 
            m=m/10;
            count+=1;
        }
        cout<<count;
    }
    else{
        cout<<"error";
    }
    
}