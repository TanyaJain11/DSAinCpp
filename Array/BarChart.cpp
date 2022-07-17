#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max = arr[0];
    for(int i =1;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }

    for(int i=max;i>=1;i--){
        for(int j=0;j<n;j++){
            if(arr[j]>=i){
                cout<<"*"<<" ";
            }else{
                cout<<"  ";
            }
           
        }
        cout<<endl;
    }

     delete[] arr;
    return 0;
}