#include<iostream>
using namespace std;

int cal(int n){
    if(n<=0){
        return 0;
    }

    int s=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            s+=j;
        }

        
    }
    return s;
}

int main(){
    int n;
    cin>>n;

    int sum = cal(n);
    cout<<sum;
    return 0;


}