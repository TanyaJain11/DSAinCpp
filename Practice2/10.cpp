#include <bits/stdc++.h>
using namespace std;
void takeInput(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void Output(int input[],int arr[],int n){
    
    for(int i=0;i<n;i++){
        int cnt=0;

        for(int j=i+1;j<n;j++){
            if(input[i]<input[j]){
                break;
            }
            else if(input[j]==input[i]){
                cnt++;
            }
        }

        for(int k=i-1;k>=0;k--){
            if(input[k]>input[i]){
                break;
            }
            else if(input[k]==input[i]){
                cnt++;
            }
        }
        arr[i]=cnt;
    }
}
int main(){
    int n;
    cin>>n;
    int input[n];
    int arr[n];
    takeInput(input,n);
    Output(input,arr,n);
    print(arr,n);
}