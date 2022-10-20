// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     queue<int>q;

//     for(int i=0;i<n;i++){
//         int s;
//         cin>>s;
//         q.push(s);
//     }

//     stack<int>st;

//     for(int i=0;i<n;i++){
//         while(!q.empty()){
//             st.push(q.front());
//             q.pop();
//         }

//         while(!st.empty()){
//             q.push(st.top());
//             st.pop();
//         }
//     }


//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }




// }

#include<iostream>
#include<cstdio>
#include<cmath>
#include <stack>
#include<queue>
using namespace std;

void reverse_k(queue<int> q,int k){
    if(k<=0)
        return;
    
    if(q.size()==0 || q.size()==1)
        return;
    
    int n=q.size();
    stack<int>s;
    for(int i=0;i<k;i++){
        s.push(q.front());
        q.pop();
    }
    while(s.empty()==false){
        q.push(s.top());
        s.pop();
    }

    for(int i=0;i<n-k;i++){
        q.push(q.front());
        q.pop();
    }
    for(int i=0;i<n;i++){
        cout<<q.front()<<" ";
        q.pop();
    }
}

int main(){
    queue<int>q;
    int n;
    cin>>n;
    int k;
    cin>>k;
    while(n--){
        int val;
        cin>>val;
        q.push(val);
    }
    reverse_k(q,k);
    return 0;
}
