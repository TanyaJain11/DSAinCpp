#include<iostream>

using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;

    int **a= new int*[r];
    for(int i=0;i<r;i++){
        a[i] = new int[c];
    }

    cout<<"enter elements of array"<<" ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;


    int rs=0 ,cs=0 ,re = r-1, ce = c-1;
    int cnt = 0;
    while(cnt<r*c){
        for(int i=rs,j=cs;i<=re;i++){
            cout<<a[i][j]<<" ";
            cnt++;
        }
        cs++;

        for(int i=re,j=cs;j<=ce;j++){
            cout<<a[i][j]<<" ";
            cnt++;
        }
        re--;

        for(int i=re,j=ce;i>=rs;i--){
            cout<<a[i][j]<<" ";
            cnt++;
        }
        ce--;

        for(int i=rs,j=ce;j>=cs;j--){
          cout<<a[i][j]<<"  ";
          cnt++;
        }
        rs++;
    }
    return 0;
}