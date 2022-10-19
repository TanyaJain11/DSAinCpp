#include<iostream>
using namespace std;

int average(int a[]){
    int s=0;
    for(int i=0;i<10;i++){
        s+=a[i];
    }
    return s/10;

}

int sumOfEven(int a[]){
    int s=0;
        for(int i=0;i<10;i++){
            if(a[i]%2==0){
                s+=a[i];
            }
        }

        return s;
}




int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }


    cout<<average(a);
    cout<<sumOfEven(a);
    



}