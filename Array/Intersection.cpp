#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int arr[100],arr2[100];
    vector<int>ans;

    cout<<"enter elements of 1st array"; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter elements of 2nd array"; 
    for(int j=0;j<m;j++){
        cin>>arr2[j];
    }

    for(int i=0;i<n;i++){
        int a = arr[i];

    for(int j=0;j<m;j++){
        if(a== arr2[j]){
           cout<<arr2[j]<<" ";
           arr2[j]=-11111111;
           break;
        }
        
    }
    }


}