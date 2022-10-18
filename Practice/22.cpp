#include<iostream>
#include<queue>
using namespace std;

void rearrange(int n,queue<int> q){
     queue<int> q1;
     queue<int> q2;
     int i=0;
    
     if(n%2==0){
        int size = n/2;

        while(i<size){
            q1.push(q.front());
            i++;
            q.pop();
        }

        while(i<n){
            q2.push(q.front());
            i++;
            q.pop();
        }
     }else{
         while(i<n){
            q1.push(q.front());
            i++;
        }
        while(!q1.empty()){
            cout<<q1.front();
            q1.pop();
        }
}

        while(!q1.empty()){
                cout<<q1.front()<<" ";
                q1.pop();
                cout<<q2.front()<<" ";
                    q2.pop();
            }
}

int main(){
    int n;
    cin>>n;

queue<int> q;

for(int i=0;i<n;i++){
    int s;
    cin>>s;
    q.push(s);
}

rearrange(n,q);
}