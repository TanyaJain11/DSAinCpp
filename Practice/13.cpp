#include<iostream>
using namespace std;

int fact(int n){
    if(n<=1){
        return 1;
    }

    return n*fact(n-1);
}

int main(){
    int n;
    cin>>n;

    if(n<=0){
        cout<<"Cant't be calculated";
        return 0;
    }

    cout<<fact(n)/2;
}