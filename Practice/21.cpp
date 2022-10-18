#include<iostream>
#include<stack>
using namespace std;

int main(){
    int n;
    cin>>n;

    stack<int>st;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        st.push(t);
    }

    int min = INT_MAX;
    while(!st.empty()){
        int s = st.top();
        if(s<min){
            min=s;
        }
        st.pop();
    }

     cout<<min;
}