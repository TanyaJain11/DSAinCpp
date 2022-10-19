#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int> quantity;
    stack<string> name;
    int q;
    cin>>q;
    int mini=INT_MAX;

   while(q--){
        int n;

        cin>>n;
        if(n!=-1){
        if(mini>n){
            mini=n;
        }
        string item_name;
        cin>>item_name;
            quantity.push(n);
            name.push(item_name);
        }
        if(n==-1){
        int cnt=0;
        while(quantity.top()!=mini){
                cnt++;
            name.pop();
            quantity.pop();
            } cout<<cnt<<" "<<name.top()<<endl;
        }
   }
    return 0;
}
