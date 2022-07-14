#include<bits/stdc++.h>
using namespace std;


int BinaryToDecimal(int n){
        int ans=0,i=0;
        while(n!=0){
            int d=n%10;
            if(d==1){
                ans= ans+pow(2,i);
            } 
            n=n/10;
            i++;
        }

        return ans;
}

int main(){

    int n;
    cin>>n;

    cout<<BinaryToDecimal(n);


}