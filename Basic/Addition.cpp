#include<iostream>
using namespace std;

void addition(int n,int m,int b){
      int r=0,p=1,c=0;
    while(n>0 ||m>0 || c>0){
        int d1=n%10;
        n=n/10;
        int d2=m%10;
        m=m/10;

        int d = d1 +d2+c;
        c =d/b;
        d = d%b;
        r = r+d*p;
        p=p*10;
    
    }
    cout<<r;
}
int main()
{

    int n,m,b;
    cin>>n>>m;


    cout<<"enter base";
    cin>>b;

   addition(n,m,10);
   


    return 0;
}