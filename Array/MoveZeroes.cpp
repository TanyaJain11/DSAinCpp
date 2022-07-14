/* Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero 
elements.
Note that you must do this in-place without making a copy of the array.
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>temp;
        int length=nums.size()-1;
        cout<<length;
        int i=0,j=0;
        while(i<=length){
            if(nums[i]!=0){
                temp.push_back(nums[i]);
                j++;
            }
            i++;
        }
        
        while(j<=length){
            temp.push_back(0);
            j++;
        }
        
        nums=temp;
        
        
    }
};
 