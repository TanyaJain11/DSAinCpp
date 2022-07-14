#include<bits/stdc++.h>
using namespace std;



//Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears 
//once or twice, return an array of all the integers that appears twice.

int FindDublicate(int arr[],int n){
    int ans =0;
    for(int i=0;i<n;i++){
       ans = ans^arr[i];    // a^a=0
    }

    for(int i=0;i<n;i++){
       ans = ans^i;    // a^a=0
    }
    return ans;
}

int main(){

    int n;
    cin>>n;

    int arr[100];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    cout<<FindDublicate(arr,n);


}