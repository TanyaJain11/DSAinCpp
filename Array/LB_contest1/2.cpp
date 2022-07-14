/*Ninja has an array 'ARR' consisting of 'N' integers. Your primary work is to split it into three parts so that each 
integer is a component of a single part only. Each part must be a consecutive contiguous subsegment of the original array
 and can also be empty. So, the sum of each part is denoted as 'S1', 'S2' and 'S3'. Ninja made the problem even harder by
  declaring a condition that 'S1' must be equal to 'S3' and 'S1' must be the maximum possible amongst all possible ways.
The sum of the empty subsegment is 0.

Input: 'N' = 5, ‘ARR’ = [5, 2, 4, 1, 4].
Output: 5  */


#include<iostream>
using namespace std;

void threeWaySplit(int arr[],int n){
    int sums,sume,ans=0,s=0,e=n-1;
    sums=arr[s];
    sume=arr[e];

    while(s<e){
        if(sums==sume){
            ans = sume;
            e--,s++;
            sums+=arr[s];
            sume+=arr[e];
        }else  if(sums>sume){
            e=e-1;
            sume+=arr[e];
        }else{
            s=s+1;
            sums+=arr[s];
        }
      
        }

    cout<<ans;

}


void takeInput(int arr[],int n){
    cout<<"enter elements of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int main(){
    int n;

    cin>>n;
    int arr[1000];

    takeInput(arr,n);
   threeWaySplit(arr,n);


}