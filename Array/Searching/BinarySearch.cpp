#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[],int n,int key){
        int s=0, e= n-1;
        int mid = s+(e-s)/2;
        

        while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        
        if(key<arr[mid]){
            e=mid-1;
        }else{
            s=mid+1;
        }

        mid= s+(e-s)/2;

        }

        return -1;

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

    int search = BinarySearch(arr,n,key);
    cout<<search;

    // if(search){
    //      cout<<"key is present";
    // }else{
    //     cout<<"not present";
    // }
    
}