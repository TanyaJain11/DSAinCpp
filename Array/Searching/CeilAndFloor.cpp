#include<iostream>
using namespace std;
int main()
{
    int data;
    cin>>data;
    int arr[] = {10,20,30,40,50,60,70};
    int n = sizeof(arr)/sizeof(arr-n);
    int l=0,h=n-1;
    int ceil=0,floor=0;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(data>arr[mid]){
            l=mid+1;
            floor=arr[mid];
        }else if(data<arr[mid]){
            h=mid-1;
            ceil=arr[mid];
        }else{
            ceil = arr[mid];
            floor=arr[mid];
        }
    }

    cout<<ceil<<endl; // Returns the smallest integer greater than or equal to x 
    cout<<floor<<" ";  // Returns the largest integer smaller than or equal to x 
    return 0;
}