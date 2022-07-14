#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    cin>>n;
    cin>>s;

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==s){
                    cout<<arr[i]<<"  "<<arr[j]<<"  "<<arr[k]<<"  ";
                    break;
                }
            }
            
        }
    }


}
/*

vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {

// Write your code here.

      vector<vector<int>> ans;

   sort(arr.begin() , arr.end());

   int left , right ;

   for(int i = 0 ; i<n ; i++)

   {

       left = i+1 ;

       right = n-1;

       while(left<right)

       {

           if(arr[left]+arr[right]+arr[i] == K)

           {

                ans.push_back({arr[i], arr[left], arr[right]});

               int x = arr[left] ;

               int y = arr[right] ;

               //skipping same elements

               while(left<right && arr[left]==x){

                   left++ ;

               }

                  while(left<right && arr[right]==y){

                   right-- ;

               }

           }

           else if(arr[left]+arr[right]+arr[i] < K){

               left++;

           }

           else{

               right--;

           }

       }

       //skipping same ith element

        while(i+1<n && arr[i]==arr[i+1]){

           i++ ;

       }

   }

   return ans;

}
*/

