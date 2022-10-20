#include <iostream>

using namespace std;

int findcomb(int n,int sum,int a){

    int i,res=0;

    if(n==1){

        if(sum>=a && sum<=9){
            return 1;
        }
        else{
            return 0;
        }

    }

    for(int i=a;i<=9;i++){
        res+=findcomb(n-1,sum-i,i+1);
    }

    return res;

}

int main()
{
    cout <<"Enter number of digits: "<<endl;
    int n;
    cin>>n;
    cout<<"Enter sum: "<<endl;
    int sum;
    cin>>sum;

    cout<<"Result is: "<<findcomb(n,sum,0);

    return 0;
}