//question 3 of assignment 1, check for primee 
#include<iostream>
using namespace std;
int main(){
    cout<<"kitne inputs daalne hai aapko?";
    int i=1, t;
    cin>>t;
    if(t>=1 && t<=10000){
        while(i<=t){
        int n;
        if (i%10==1 && i!=11){
            cout<<"enter "<<i<<"st number";}   //this was unnecessary but mazza aa rha tha >.<
        else if (i%10==2 && i!=12){
            cout<<"enter"<<i<<"nd number";}
        else if (i%10==3 && i!=13){
            cout<<"enter"<<i<<"rd number";}
        else {
            cout<<"enter"<<i<<"th number";}
        cin>>n;
        if(n<2 || n>=10^9){
            break;
        }
        //checking for prime 
        int l=2, h=0;
        while(l<n){
            if(n%l==0){
                h=1;
                }
            l+=1;
        }
        if(h==1){
            cout<<"entered number is not prime :("<<endl;
        }
        else if (n<=1){
            cout<<"2 ya 2 se bada number daalo yaarrrr >.<"<<endl;
        }
        else{
            cout<<"entered number is prime :)"<<endl;
        }

        i+=1;}}
    
    else{
        cout<<"t constraint";
    }
}
