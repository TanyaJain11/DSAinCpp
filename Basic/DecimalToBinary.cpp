#include<bits/stdc++.h>
using namespace std;


//  reverse of  number 
//  ans = digit*(10^i) + ans; 

// print number
// ans = (ans*10) +digit


// int DecimalToBinary(int n){
//         int ans=0,i=0;
//         while(n !=0){ 
//             int b=n&1;
//              ans= b*pow(10,i) +ans;
//             n=n>>1;
//             i++;
//         }

//         return ans;
// }

int DecimalToBinary(int n){
        int ans=0,i=0;
        while(n !=0){ 
            int b=n&1;
             ans= b*pow(10,i) +ans;
            n=n>>1;
            i++;
        }

        return ans;
}

int main(){

    int n;
    cin>>n;

    cout<<DecimalToBinary(n);
}