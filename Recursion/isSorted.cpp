#include<iostream>
using namespace std;

bool isSorted(int *arr,int n){
    if(n==0 || n==1){
        return 1;
    }

    if(arr[0]>arr[1]){
        return 0;
    }else{
       return isSorted(arr+1,n-1);
    }
}

int main(){
    int n;
    cin>>n;
    int *arr =new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool ans = isSorted(arr,n);
    if(ans){
        cout<<"array is sorted";
    }else{
        cout<<"array is not sorted";
    }


}