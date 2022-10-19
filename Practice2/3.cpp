#include<iostream>
#include<vector>
#include<set>
using namespace std;


void merge(int a[],int b[],int n,int m){
        int i=0;
        int j=0;

        vector<int> s;

        while(i<n && j<m){
            if(a[i]<b[j]){
                s.push_back(a[i++]);
                cout<<"d";
            }else if(a[i]>b[j]){
                s.push_back(b[j++]);
                cout<<"C";
            }else{
                s.push_back(a[i++]);
                s.push_back(b[j++]);
                cout<<"dc";
            }

        }

        while(i<n){
            s.push_back(a[i++]);
        }

        while(j<m){
            s.push_back(b[j++]);
        }

        // set<int> st;
        // for(int i=0;i<s.size();i++){
        //     st.insert(s[i]);
        // }

        for(auto i = s.begin();i!=s.end();i++){
            cout<<*i<<" ";
        }
}

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"enter size of second";
    int m;
    cin>>m;
    cout<<"enter elements of second";
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    merge(a,b,n,m);


}