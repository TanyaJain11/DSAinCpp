#include<iostream>
using namespace std;

bool checkIsAp(int a[],int n){
    if(n==1){
        return true;
    }

    int d=a[1]-a[0];
    for(int i=1;i<n-1;i++){
        if(a[i+1]-a[i]!=d){
            return false;
        }
    }

    return true;

}

bool checkGP(int a[],int n){
      if(n==1){
        return true;
      }

      int r = a[1]/a[0];
      for(int i=1;i<n;i++){
        if(a[i]/a[i-1]!=r){
            return false;
        }
      }
      return true;

}



int main(){
    int n;
    cin>>n;
    int *a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }


    if(checkIsAp(a,n)){
        cout<<"AP";
    }else{
        cout<<"notAP";
    }

    
    if(checkGP(a,n)){
        cout<<"GP";
    }else{
        cout<<"not GP";
    }

    delete []a;
}