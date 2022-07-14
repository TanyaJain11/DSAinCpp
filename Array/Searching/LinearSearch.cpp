#include<bits/stdc++.h>
using namespace std;

bool LinearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n,key;
    cin>>n;
    cout<<"enter key";
    cin>>key;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 

    bool search = LinearSearch(arr,n,key);

    if(search){
         cout<<"key is present";
    }else{
        cout<<"not present";
    }
    
}