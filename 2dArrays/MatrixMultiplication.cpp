#include<iostream>
using namespace std;

void Multiply(int **a,int **b,int r1,int c1,int r2,int c2){
    if(c1 !=r2){
        cout<<"invalid input";
    }

    int p[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            p[i][j]=0;
            for(int k=0;k<c1;k++){
                p[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // cout<<p[1][1];

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
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

     cout<<"enter for 2nd arrra "<<" ";
    int r2,c2;
    cin>>r2;
    cin>>c2;

    int **a = new int*[r1];
    int **b = new int*[r1];
    
    takeInput(a,r1,c1);
    takeInput(b,r2,c2);
    Multiply(a,b,r1,c1,r2,c2);
    

    return 0;
}