#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
           return false;
        }
    }

    return true;
}

int main(){
    int n;
    cin>>n;
    int i=2;
    int s=0;

    int cnt =0;
    while(cnt<n){
        if(isPrime(i)){
            s+=i;
            cout<<i<<" + ";
            cnt++;
        }
        i++;
    }

    cout<<s;
}