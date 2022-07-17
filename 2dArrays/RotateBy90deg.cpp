#include<iostream>

using namespace std;
int main()
{

    // first do transpose of matrix and then reverse the columns 


    int r,c;
    cin>>r>>c;

    char **a= new char*[r];
    for(int i=0;i<r;i++){
        a[i] = new char[c];
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

    // Transpose

    for(int i=0;i<r;i++){
        for(int j=i;j<c;j++){
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }

    // reverse columns
    for(int i=0;i<r;i++){
        int l=0;
        int r=c-1;
        while(l<r){
            swap(a[i][l],a[i][r]);
            l++;
            r--;
        }
    }

     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


  
    return 0;
}