#include<bits/stdc++.h>
using namespace std; 


// sort 0 and 1 in array 

int main(){
    int n;
    cin>>n;
    int arr[100];

    cout<<"Enter elements of array only 0 or  1";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  

    int s= 0,e = n-1;
     while(s<e){
        while(arr[s]==0 && s<e){
             s++;
         }
         while(arr[e]==1  && s<e){
             e--;
         }

         if(s<e){
             swap(arr[s],arr[e]);
             s++;
             e--;
         }
         
     }


     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
}