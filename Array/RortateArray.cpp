/*
Given an array, rotate the array to the right by k steps, where k is non-negative.
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
*/

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
        
//         vector<int>temp(nums.size());
            
//             for(int i=0;i<nums.size();i++){
//                 temp[(i+k)%nums.size()]=nums[i];
//             }
        
//         nums=temp;
        
//     }
// };

#include<iostream>
using namespace std;

 void rotate(int *a, int k) {
        
        int *temp = new int[sizeof(a)];
            
            for(int i=0;i<=sizeof(a);i++){
                temp[(i+k)%sizeof(a)]=a[i];
                cout<<temp[i]<<"   ";
            }
        

        a=temp;
        delete[] temp;
    }

int main()
{
    int n,k;
    cin>>n>>k;

int *a = new int[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

// cout<<sizeof(a)<<endl;;
//    rotate(a,k);

int *temp = new int[n];

if(k<0){
    k=n-k;
    for(int i=0;i<n;i++){
                temp[(i+k)%n]=a[i];
            }
        
}else{
    for(int i=0;i<n;i++){
                temp[(i+k)%n]=a[i];
            }
}
            
        

        a=temp;

     for(int i=0;i<n;i++){
            cout<<a[i]<<"  ";
        }
        
   delete[] a;


    return 0;
}