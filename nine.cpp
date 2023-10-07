#include<iostream>
using namespace std;
int main(){
    cout<<"enter number";
    int a, b;
    cin>>a;
    cout<<"enter another number";
    cin>>b; 
    //lcm
    int gr, sm;
    if(a>b){
        gr=a;
        sm=b;
    }
    else{
        gr=b;
        sm=b;       
    }
    int x=gr;
    while(1){
        if(x%a==0 && x%b==0){
            cout<<"least common multiple is "<<x<<endl;
            break;
        } 
        else{
            x++;
        }
    }
    //hcf
    int f=sm;
    while(f>0){
        if(gr%f==0 && sm%f==0){
            cout<<"highest common factor is "<<f<<endl;
            break;}
        else{
            f-=1;
        }

}}