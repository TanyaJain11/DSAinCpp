#include<iostream>
using namespace std;

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return  factorial(n - 1)*n;
   
    // for(int i=1;i<=n;i++){
    //     f*=i;
    // }
}

// int factorial(int n){
//     if(n<=1){
//         return 1;
//     }

//     return factorial(n-1)*n;
// }

int main(){
    int n;
    cin>>n;
    if(n<0){
        cout<<"ERROR!";
        return 0;
    }
    cout<<factorial(n);
    return 0;

}

