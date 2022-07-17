#include<iostream>
using namespace std;

void subtraction(int n,int m,int base){
         int res=0;
    int p=1;
    int c=0;
    while(n>0){
        int d1 = n%10;
        int d2 = m%10;
        n=n/10;
        m=m/10;
       int temp =d1-d2+c;
        if(temp<0){
        c=-1;
        temp += base;
        }else{
           c=0;
        }
        res += temp * p;
        p=p*10;

    }
    cout<<res;
    return;
}
int main()
{
    int n,m,b;
    cin>>n>>m;
    cout<<"Enter base";
    cin>>b;

    subtraction(n,m,b);

   
    
    return 0;
}