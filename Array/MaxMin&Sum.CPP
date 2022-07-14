#include<iostream>
using namespace std;


int sum(int arr[],int n){
    int s = 0;
    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    return s;
}

int GetMax(int arr[],int n){
    int maximum=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maximum){
            maximum = arr[i];
        }


    // // predefined function for finding max 
    // maximum = max(maximum,arr[i]);

    }
    return maximum;
}


int GetMin(int arr[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int n;
    cin>>n;
    // don't make size of array as variable not a good practice arr[n]
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    
    cout<<GetMax(arr,n);
    cout<<GetMin(arr,n);
    cout<<sum(arr,n);



}