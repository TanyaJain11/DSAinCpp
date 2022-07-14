#include<iostream>
using namespace std;

int Pivot(int arr[],int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]>arr[0]){
            s=mid+1;
        }else{
            e=mid;
        }
        mid=s+(e-s)/2;

    }

    return s;
}


int search(int arr[],int strt,int n,int key){
    int s=strt,e=n, k=key;
    int mid=s+(e-s)/2;
    int ans=0;

    while(s<=e){
        if(arr[mid]==k){
            return mid;
        }else if(arr[mid]<k){
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }

    return -1;
}

int main(){
    int n,key;
    cin>>n;
    cin>>key;
    

    int arr[100];
    cout<<"enter elements of array"<<" ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int pivot = Pivot(arr,n);

    if(arr[pivot]<=key && key<=arr[n-1]){
        cout<<search(arr,pivot,n-1,key);
    }else{
        cout<<search(arr,0,pivot-1,key);
    }

}