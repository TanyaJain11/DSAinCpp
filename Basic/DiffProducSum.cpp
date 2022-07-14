#include<bits/stdc++.h>
using namespace std;

int main(){
     int n,sum=0 , product =1;
     cin>>n;

    while(n!=0){
       int d=n%10;
        sum +=d;
        product *=d;
        n= n/10;
    }
     int diff=product - sum;
     cout<<diff;ś
}