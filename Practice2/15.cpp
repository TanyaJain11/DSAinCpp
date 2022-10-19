#include <bits/stdc++.h>
using namespace std;


bool checkPerfect(int i){
    int sum=0;


    for(int j=1;j<i;j++){
        if(i%j==0){
            sum+=j;
        }
    }

    if(sum==i){

        return true;
    }else{
        return false;
    }
}


int main(){
    int n;
    cin>>n;
   int m;
   cin>>m;

   for(int i=n;i<=m;i++){
    if(checkPerfect(i)){
            cout<<i<<" ";

    }
   }
    return 0;

}
