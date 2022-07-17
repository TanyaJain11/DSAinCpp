#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;

    int * a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int *v = new int[n];

    for(int i=0;i<n;i++){
        int j = a[i];
        v[j]=i;
    }


    for(int j=0;j<n;j++){
        cout<<v[j];
    }

    delete[] a;
    delete[] v;


    return 0;
}