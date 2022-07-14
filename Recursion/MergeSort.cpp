#include<iostream>
using namespace std;


void merge(int *arr,int s,int e){
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
        }

    }

    while(index1<l1){
        arr[index++]=first[index1++];
    }


while(index2<l2){
        arr[index++]=second[index2++];
    }

delete [] first;
delete []  second;


}


void mergeSort(int *arr,int s, int e){

    if(s>=e){
        return;
    }
        int mid=s+(e-s)/2;

        mergeSort(arr,s,mid);
        mergeSort(arr,mid+1,e);

        merge(arr,s,e);


}


int main(){
    int n;
    cin>>n;
    int *arr =new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    delete [] arr;
}



// #include<iostream>
// using namespace std;

// void merge(int *arr, int s, int e) {

//     int mid = (s+e)/2;

//     int len1 = mid - s + 1;
//     int len2 = e - mid;

//     int *first = new int[len1];
//     int *second = new int[len2];

//     //copy values
//     int mainArrayIndex = s;
//     for(int i=0; i<len1; i++) {
//         first[i] = arr[mainArrayIndex++];
//     }

//     mainArrayIndex = mid+1;
//     for(int i=0; i<len2; i++) {
//         second[i] = arr[mainArrayIndex++];
//     }

//     //merge 2 sorted arrays     
//     int index1 = 0;
//     int index2 = 0;
//     mainArrayIndex = s;

//     while(index1 < len1 && index2 < len2) {
//         if(first[index1] < second[index2]) {
//             arr[mainArrayIndex++] = first[index1++];
//         }
//         else{
//             arr[mainArrayIndex++] = second[index2++];
//         }
//     }   

//     while(index1 < len1) {
//         arr[mainArrayIndex++] = first[index1++];
//     }

//     while(index2 < len2 ) {
//         arr[mainArrayIndex++] = second[index2++];
//     }

//     delete []first;
//     delete []second;

// }

// void mergeSort(int *arr, int s, int e) {

//     //base case
//     if(s >= e) {
//         return;
//     }
    
//     int mid = (s+e)/2;

//     //left part sort karna h 
//     mergeSort(arr, s, mid);
    
//     //right part sort karna h 
//     mergeSort(arr, mid+1, e);

//     //merge
//     merge(arr, s, e);
// }

// int main() {
//      int n;
//     cin>>n;
//     int *arr =new int[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    

//     mergeSort(arr, 0, n-1);

//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     } cout << endl;

//     return 0;
// }