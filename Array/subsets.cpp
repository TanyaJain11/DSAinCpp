#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int *a =new int[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int limit = pow(2,n);
    // cout<<"limit"<<limit<<endl;
    for(int i=0;i<limit;i++){
        string set="";
        int temp = i ;
        for(int j=n-1;j>=0;j--){
            // cout<<i<<endl;
            int r = temp%2;
            temp=temp/2;
            if(r==0){
                set = "- "+set;
            }else{
                set=to_string(a[j])+" "+set;
                // cout<<"setjhk"<<a[j];
            }

        }

        cout<<set<<endl;

        
    }

    return 0;
}