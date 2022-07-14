#include<iostream>
using namespace std;


///  You have been given a sorted array/list ARR consisting of ‘N’ elements. You are also given an integer ‘K’
////   Now, your task is to find the first and last occurrence of ‘K’ in ARR.  

int FirstOcc(int arr[],int n, int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e=mid-1;
        }else if(key<arr[mid]){
            e=mid-1;
        }else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }

    return ans;
}


int LastOcc(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=0;

    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }else if(key>arr[mid]){
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}


int main(){
    cout<<"enter n";
    int n,key;
    cin>>n;
    cout<<"enter key"<<" ";
    cin>>key;
    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"first occurence "<<FirstOcc(arr,n,key);
    cout<<"last occurence"<<LastOcc(arr,n,key);

    int total = (LastOcc(arr,n,key)-FirstOcc(arr,n,key))+1;
    cout<<total;
    }