#include<iostream>
using namespace std;

bool binarySearch(int *arr,int s,int e,int key){
   if(s>e){
    return false;
   }

   int mid=s+(e-s)/2;

   if(arr[mid]==key){
    return true;
   }

   if(arr[mid]>key){
    return binarySearch(arr,s,mid-1,key);
   }else{
    return binarySearch(arr,mid+1,e,key);
   }
    

}



int main(){
    int n,key;
    cin>>n;
    int *arr =new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"enter Key ";
    cin>>key;

    bool ans = binarySearch(arr,0,n-1,key);
    if(ans){
        cout<<"element found";
    }else{
        cout<<"element not found";
    }
}