#include<bits/stdc++.h>
using namespace std;

 // BRUTE FORCE APPROACH
// bool IsPowerOf2(int n){
//     int ans=1;
//       for(int i=0;i<30;i++){
//           int ans= pow(2,i);
//           if(ans==n){
//               return true;
//           }
//       }
//       return false;
// }


bool IsPowerOf2(int n){
    int ans=1;
      for(int i=0;i<30;i++){
          if(ans==n){
              return true;
          }
          if(ans<INT_MAX/2)
           ans *=2;
      }
      return false;
}


int main(){

    int n;
    cout<<"enter n";
    cin>>n;

    cout<<IsPowerOf2(n);

}