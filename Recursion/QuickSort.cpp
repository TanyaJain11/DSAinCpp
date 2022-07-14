#include<iostream>
using namespace std;

int partition(int *arr,int s,int e){
    int pivot = arr[s];

    int cnt =0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }

    int index = s+cnt;
    swap(arr[s],arr[index]);
    int i=s,j=e;
    while(i<index && j>index){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }

        while(i<index && j>index){
            swap(arr[i++],arr[j--]);
        }
    }

    return index;
}


void quickSort(int *arr, int s, int e){
    if(s>=e){
        return;
    }

    int p = partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);


}

int main(){
int n;
cin>>n;

int *arr = new int[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

quickSort(arr,0,n-1);


for(int i=0;i<n;i++){
    cout<<arr[i]<<"  ";
}
}