#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    int root = sqrt(n);
    if(root*root==n){
        return true;
    }else{
        return false;
    }
}

void printDoor(int n){
    if(n==0){
        return;
    
    }

    for(int i=1;i<=n;i++){
        if(isPrime(i)){
            cout<<i<<"  ";
            cout<<"Open"<<endl;
        }else{
            cout<<"closed"<<endl;
        }
    }
}

int main(){
    int n;
    cin>>n;

    printDoor(n);
}