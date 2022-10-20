#include<iostream>
using namespace std;

int BinaryToDecimal(int a){
    if(a==0){
        return 0;
    }

   return(a%10+2*BinaryToDecimal(a/10));
}

int DecimalToBinary(int b){
    if(b==0){
        return 0;
    }

    return(b%2+10*DecimalToBinary(b/2));
}

int main(){
    long long a;
    cin>>a;
    long b ;
    cin>>b;

    int n = BinaryToDecimal(a);
    int m = BinaryToDecimal(b);
    int s= n+m;
    cout<<DecimalToBinary(s);
    return 0;


}