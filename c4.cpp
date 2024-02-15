#include<iostream>
using namespace std;
bool check(int arr[], int n){
    int a=0;
    for (int i=0; i<n; i++) {
        if (arr[i] > arr[(i+1)%n]) {
            a++;
        }}
    return (a<=1);
}
int main(){
    int n;
    cout<<"Size of array?";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int x=check(arr,n);
    if(x==0){
        cout<<"false";
    }
    else{ 
        cout<<"true";
    }
}