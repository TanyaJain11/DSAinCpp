#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s;
    cin>>n;
    cin>>s;

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==s){
                  cout<<min(arr[i],arr[j])<<" ";   // we have to print pair in ascending order
                  cout<<max(arr[i],arr[j])<<endl;
            }
        }
    }
}
