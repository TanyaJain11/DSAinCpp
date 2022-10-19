#include <bits/stdc++.h>
using namespace std;

void printArray(int** arr,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    cout<<endl;
}

void takeInput(int** arr,int n,int m){
    for(int i=0;i<n;i++){
        arr[i]=new int[m];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

}

int** transpose(int** arr,int n,int m){
    int** input=new int*[m];
    for(int i=0;i<m;i++){
        input[i]=new int[n];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            input[i][j]=arr[j][i];
        }
    }return input;
}

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int** arr=new int*[n];
    takeInput(arr,n,m);
    printArray(arr,n,m);

    int** input=transpose(arr,n,m);
    printArray(input,m,n);

}
