// WE NEED TO FIND THE COMPLEMENT OF BASE 10  //
#include<iostream>
using namespace std;

int BitwiseComplement(int n){
      int mask=0;
      int m=n;

      if(n==0){    //edge case
          return 1;
      }
      while(m!=0){
          mask=(mask<<1)|1;
          m=m>>1;
      }

      int ans = mask & (~n);
      return ans;
}

int main(){
    int n;
    cout<<"enter n";
    cin>>n;

    cout<<BitwiseComplement(n);
}