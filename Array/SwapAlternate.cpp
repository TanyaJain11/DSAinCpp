#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[100];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }



}