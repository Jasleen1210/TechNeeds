//first question of assignment 1, Print Z
#include<iostream>
using namespace std;
int main(){
    //first approach that comes to mind is that i run an if loop for the first and last row so that is what i did, i now realise i couldve run two for loops using OR operator but this approach was more natural to me 
    int i=1;
    while(i<=5){
        if(i==1 || i==5){
            cout<<"*****"<<endl;}
        else{
            int k=5-i;
            while(k>0){
                cout<<" ";
                k=k-1;
            }
            cout<<"*"<<endl;
        }   
        i=i+1;
        }
}