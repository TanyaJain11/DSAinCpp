#include<iostream>
using namespace std;

int pow(int b,int p){
        if(p==0){
            return 1;
        }

        return (b*pow(b,p-1));
}

int main(){
    int b,p;
    cin>>b;
    cout<<"enter p";
    cin>>p;

    cout<<pow( b, p);
}