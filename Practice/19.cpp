#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    if(n<5){
        for(int i=0;i<5-n;i++){
            cout<<"-";
        }
        for(int i=0;i<3;i++){
            cout<<arr[i];
        }
    }else if(n>5){
        for(int i=n-5;i<n;i++){
            cout<<arr[i];
        }
    }else{
        for(int i=0;i<n;i++){
            cout<<arr[i];
        }
    }
    
}