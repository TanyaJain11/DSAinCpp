#include<iostream>
using namespace std;

int add(int &n,int &m){
     return n+m;
}

int sub(int &n,int &m){
     return (n>m?n-m:m-n);
}
int mul(int &n,int &m){
     return n*m;
}
int divi(int &n,int &m){
     return (n/m);
}
int main(){
    int n,m;
    cin>>n>>m;

    cout<<add(n,m)<<" ";
    cout<<sub(n,m)<<" ";
    cout<<mul(n,m)<<" ";
    cout<<divi(n,m)<<" ";

}