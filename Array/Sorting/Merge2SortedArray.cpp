/*You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing
 the number of elements in nums1 and nums2 respectively.
Merge nums1 and nums2 into a single array sorted in non-decreasing order.
The final sorted array should not be returned by the function, but instead be stored inside the array nums1. 
To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, 
and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

*/

void mergeArray(int arr1[],int arr2[],int n,int m){
    int i=n-1;
    int j=m-1;
    int k=(m+n-1);

    while(i>=0 && j>=0){
        if(arr1[i]>arr2[j]){
            arr1[k--]=arr1[i--];
        }else{
            arr1[k--]=arr2[j--];
        }
    }

    while(i>=0){
        arr1[k--]=arr1[i--];
    }

    while(j>=0){
        arr1[k--]=arr1[j--];
    }
}

#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int arr1[1000],arr2[1000];

    cout<<"enter elements of arr1"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    
    cout<<"enter elements of arr2"<<endl;
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    
    mergeArray(arr1,arr2,n,m);

    cout<<"Array after merging"<<endl;
    for(int k=0;k<=(n+m-1);k++){
        cout<<arr1[k]<<" ";
    }
}

 