// TWIN PRIME NUMBER 
#include<iostream>
using namespace std;

bool checkPrime(int n){
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;

    for(int i=n-1;i>2;i--){
        if(checkPrime(i) && checkPrime(n-2)){
            cout<<i<<" "<<i-2;
            return 0;
        }
    }
}