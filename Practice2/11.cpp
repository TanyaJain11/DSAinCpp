
#include <bits/stdc++.h>
using namespace std;


bool isConsective(stack<int> s){
    if(s.size()==0){
        return false;
    }
    while(!s.empty()){
        int l=s.top();
        s.pop();
        int m=s.top();
        s.pop();
        if(l>m){
            if(l!=m+1){
                return false;
            }
        }else{
            if(m!=l+1){
                return false;
            }
        }
    }return true;

}

int main(){
    stack<int> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        s.push(element);
    }
    if(n%2!=0){
        s.pop();
    }
    if(isConsective(s)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
