#include<iostream>
using namespace std;

void wavePrint(int **a,int r,int c){
    for(int j=0;j<c;j++){
        if(j%2==0){
            for(int i=0;i<r;i++){
                cout<<a[i][j]<<" ";
            }
            
        }else{
            for(int i=r-1;i>=0;i--){
                cout<<a[i][j]<<" ";
            }
          
        }
    }

  
}


void takeInput(int **a,int n,int m){
    for(int i=0;i<n;i++){
        a[i]=new int[m];
    }

     cout<<endl;
    cout<<"enter Elements of array "<<"  ";

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int r1,c1;
    cin>>r1;
    cin>>c1;

    int **a = new int*[r1];
    takeInput(a,r1,c1);
    wavePrint(a,r1,c1);
    

    return 0;
}