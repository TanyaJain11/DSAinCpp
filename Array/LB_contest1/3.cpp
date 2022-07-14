 /*
 You have a total of 'B' candies and ‘N’ friends each having various demands for candies. You need to find the maximum
 possible value ‘X’ such that you can full fill all the demands having quantity less than or equal to ‘X’ of any of the
  friends. More formally, the value of all demands to be full-filled should be less than or equal to X and their total 
  sum must be less than or equal to ‘B’.



  Example:-
You have 3 friends and 20 total candies. 

The first friend demands [1,2,3] candies, 
The second friend demands [4,2,3] candies and
The third friend demands [1,10,2] candies. 

So if you choose X as 9, demands fulfilled of 1st friend are [1,2,3], total = 6, demands fulfilled of 2nd friend are 
[4,2,3], total = 9, and demands fulfilled of the third friend are [1,2], total = 3. 

So total candies used is 6+9+3=18 which is less than B(20). So X=9 is possible. (You have to find the maximum such value 
of X).


Sample Input :
1 2
3 4 3 1
Sample Output 2 :
2  
*/





#include<iostream>
using namespace std;

int MaximizeX(int arr[][4],int b){
     int maximum=0,B=b;

    for(int i=0;i<3;i++){
        for(int j=1;j<=arr[i][0];j++){
            maximum = max(maximum,arr[i][j]);
        }
    }
    cout<<"maximum"<<maximum<<endl;

    int s=0,e=maximum,ans=0;
    while(s<=e){
        int mid= s+(e-s)/2;
        int total=0;
        for(int i=0;i<3;i++){
            for(int j=1;j<=arr[i][0];j++){
                if(arr[i][j]<=mid){
                    total+=arr[i][j];
                }
            }
        }

        cout<<"total"<<total<<endl;
        if(total<=B){
            ans=mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
    }

    return ans;
}

int main(){

    int b;
    cin>>b;

    int arr[3][4]={{3,1,2,3},{3,4,2,3},{3,1,10,2}};
    cout<<MaximizeX(arr, b);



}