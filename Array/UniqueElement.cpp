#include<bits/stdc++.h>
using namespace std;

int FindUnique(int arr[],int n){
    int ans =0;
    for(int i=0;i<n;i++){
       ans = ans^arr[i];    // a^a=0
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


    cout<<FindUnique(arr,n);


}