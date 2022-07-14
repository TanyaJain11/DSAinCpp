#include<iostream>
using namespace std;

int Exponent(int n,int m){
    if(m==0){
        return 1;
    }
    if(m==1){
        return n;
    }

     int ans = Exponent(n,m/2);

     if(m%2==0){
        return ans*ans;
     }else{
        return n * ans*ans;
     }

}

int main(){
    int n,m;
    cout<<"enter n";
    cin>>n;
    cout<<"enter m";
    cin>>m;

    cout<<Exponent(n,m);
}