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

    int *b = new int[m];
    cout<<"enter elements for second array ";
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    // size of sum array will be max of n and m
    int *sum = new int[n>m?n:m];


  // we are starting index from end of array 
    int i=n-1;
    int j=m-1;
    int k= sizeof(sum)-1;
    int c=0;

    while(k>=0){
        int d=c;

        if(i>=0)
        {
           d= d+a[i];
        }
        if(j>=0){
            d=d+b[j];
        }
        
        c=d/10;
        d=d%10;

        sum[k]=d;

        i--;
        j--;
        k--;


    }

    if(c!=0){
        cout<<c;
    }

    for(int i=0;i<sizeof(sum);i++){
        cout<<sum[i];
    }

    delete[] a;
    delete[] b;
    delete[] sum;


    return 0;
}