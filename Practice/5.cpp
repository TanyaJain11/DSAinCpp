#include<iostream>
using namespace std;

void NumReverse(int n){
    while(n>=1){
    int d = n%10;
    cout<<d;
    n=n/10;
    }
}
int main(){
    int n;
    cin>>n;

    NumReverse(n);
}