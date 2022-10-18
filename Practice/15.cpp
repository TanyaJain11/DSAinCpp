#include<iostream>
using namespace std;

int cube(int n,int i){
    if(i==3){
        return n;
    }
    return n*cube(n,i+1);
}

int main(){
    int n;
    cin>>n;

    cout<<cube(n,1);
}