#include<iostream>
using namespace std;

int cal(int n){
    if(n==0){
        return 0;
    }

    if(n<0){
        return 0;
    }

    int sum=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            sum+=i;
        }
    }
    return sum;
}

int main(){
        int n;
        cin>>n;
        int sum = cal(n);
        cout<<sum<<endl;
        return 0;
}