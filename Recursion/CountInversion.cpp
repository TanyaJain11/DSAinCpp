#include<iostream>
using namespace std;


int merge(int *arr,int s,int e){
    int inv=0;
    int mid=s+(e-s)/2;

    int l1 = mid-s+1;
    int l2=e-mid;

    int *first = new int[l1];
    int *second = new int[l2];

    //copy values

    int index =s;
    for(int i=0;i<l1;i++){
        first[i]= arr[index++];
    }

    index=mid+1;
    for(int i=0;i<l2;i++){
        second[i]= arr[index++];
    }

    //merge arrays

    int index1=0;
    int index2=0;
    index=s;

    while(index1<l1 && index2<l2){
        if(first[index1]<second[index2]){
            arr[index++]=first[index1++];

        }else{
            arr[index++]=second[index2++];
            inv+=l1-index1;
        }

    }

    while(index1<l1){
        arr[index++]=first[index1++];
    }


while(index2<l2){
        arr[index++]=second[index2++];
    }

    return inv;

delete [] first;
delete []  second;


}


int mergeSort(int *arr,int s, int e){

    int inv =0;


    if(s<e){
        int mid=s+(e-s)/2;
        inv+=mergeSort(arr,s,mid);
        inv+=mergeSort(arr,mid+1,e);

        inv+=merge(arr,s,e);

    }

    return inv;


}


int main(){
    int n;
    cin>>n;
    int *arr =new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"inversions "<<mergeSort(arr,0,n-1)<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    delete [] arr;
}

