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

    int dir = 0,i=0,j=0;
    while(true){

        int dir = (dir + a[i][j])%4;
        if(dir==0){
            j++;
        }else if(dir==1){
            i++;
        }else if(dir==2){
            j--;
        }else if(dir==3){
            i--;
        }
        if(i<0){
            i++;
            break;
        }else if(j<0){
            j++;
            break;
        }else if(i==r){
            i--;
            break;
        }else if(j==c){
            j--;
            break;
        }
    }

    cout<<"i"<<i<<" "<<"j"<<j;
    return 0;
}