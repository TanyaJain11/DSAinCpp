#include<iostream>
using namespace std;

int multiplication(int n,int d2,int b){
    cout<<"multiply"<<endl;
    int res=0;
    int c=0,p=1;

    while(n>0 || c>0){
        int d1 = n%10;
        n=n/10;

            int d = d1*d2+c;
            c=d/b;
            d=d%b;
            res+=d*p;
            p=p*10;
        
    }
    return res;

}


int addition(int n,int m,int b){
    cout<<"add"<<endl;
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
    return r;
}



int getProduct(int m,int b,int n){
    int res=0;
    int p=1;

    while(m>0){
        int d2 = m%10;
        m=m/10;
        int sp=multiplication(n,d2,b);
        res = addition(res,sp*p,b);
        p=p*10;
    }
    return res;

}


int main()
{
    int n,m,b;
    cin>>n>>m;

    cout<<"enter base ";
    cin>>b;

    cout<<getProduct(m,b,n);

    return 0;
}