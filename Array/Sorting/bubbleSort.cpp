#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){

    for(int i=1;i<n;i++){
        bool swapped= false;
        for(int j=0;j<n-1;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j],arr[j+1]);
                swapped= true;
            }
        }
        if(swapped=false){
            break;
        }
    }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}

int main(){
    int n;
    cin>>n;

    int arr[100];

    cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bubbleSort(arr,n);
    print(arr,n);
}