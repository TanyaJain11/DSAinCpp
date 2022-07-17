#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    
    int *a=new int[n];
    cout<<"enter elements for first array ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    // we have considered array b greater than array a 

    int *b = new int[m];
    cout<<"enter elements for second array ";
    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    // size of sum array will be max of n and m
    int *diff = new int[n>m?n:m];


  // we are starting index from end of array 
    int i=n-1;
    int j=m-1;
    int k= sizeof(diff)-1;
    int c=0;

    while(k>=0){
        int d=0;
        int av = i>=0? a[i]:0;

        if(b[j] +c >=av)
        {
           d= b[j]+c-av;
           c=0;
        }else{
            d=b[j]+c+10-av;
            c=-1;
        }
        diff[k] = d;

        i--;
        j--;
        k--;


    }

    int indx =0;
    while(indx<sizeof(diff)){
        if(diff[indx]==0){
            indx++;
        }else{
            break;
        }
    }

    for(int i=indx;i<sizeof(diff);i++){
        cout<<diff[i];
    }

    delete[] a;
    delete[] b;
    delete[] diff;


    return 0;
}