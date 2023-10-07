//print all primes within a given range
#include<iostream>
using namespace std;
int main(){
    cout<<"high?";//yeah
    int high;
    cin>>high;
    cout<<endl;
    cout<<"low?";
    int low;
    cin>>low;
    if(low>=2 && low<high && high<10^6){
        cout<<endl<<"prime numbers bw the two entered numbers are:"<<endl;
        int n=low;
        while(n<=high){
        int i=2, prime=0;
        while(i<n){
            if(n%i==0){
                prime+=1;
                }
            i+=1;}
        if (prime==0){
            cout<<n<<"\t";
        }
    
        n+=1;}}
    else{
        cout<<"wrong input";
    }
    
    }
    
