/*Ninja took you to an apple store where there is 'N' number of different apples present in the store and ith apple cost 
'ARR[i]' coins. It is pre-decided that you have to buy all of them. You would be given a coupon by Ninja that allows you 
to buy ‘M’ apples while paying only for 'M - 1' most expensive apples. Thus, you will get the cheapest apple for free.
 You can use the coupon once only.
Now, Ninja requested you to tell the minimum total coins required to buy all apples if the coupon is used optimally. 
It is necessary to use the coupon and have to select ‘M’ apples for using it.


Input: 'N' = 5, ‘ARR’ = [5, 2, 4, 1, 3], ‘M’ = 3.
Output: 12     */

#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){

    for(int i=0;i<n;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex =j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}


int main(){
    int n,m,sum=0;
    cin>>n;
    cout<<"m  ";
    cin>>m;

    int arr[100];

    cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    selectionSort(arr,n);
    
    int CouponIndex=n-m;
    for(int i=0;i<n;i++){
        if(i==CouponIndex){
            continue;
        }else{
            sum+=arr[i];
        }
    }

    cout<<"sum "<<sum;

}