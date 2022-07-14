#include<bits/stdc++.h>
using namespace std;

// void rev(int i,int j,string &s){
//     int temp=s[i];
//     s[i]=s[j];
//     s[j]=temp;
// }

// void reverseWord(string s){
//     int length = s.length();
//     cout<<length;
//     int j=0;
//     for(int i=0;i<=length;i++){
//         cout<<s[i];
//         if(s[i]!=' '){
//             j++;
//         }else{
//             rev(i,j,s);
//         }
//     }
    
//     // cout<<s;
// }

// int main(){
//     string s;
//     getline(cin,s);
//     reverseWord(s);
//     cout<<s;
// }



// void rev(int i,int j,string &s){
//     int temp=s[i];
//     s[i]=s[j];
//     s[j]=temp;
// }

void reverseWord(string s){
    int length = s.length();
    stack<char> st;

    for(int i=0;i<=length;i++){
        // cout<<s[i]<<"S"<<endl;
        if(s[i]!=' '){
           st.push(s[i]);
        }else{

            while(st.empty()==false){
                cout<<st.top();
                st.pop();

            }
            cout<<" ";
            
        }
    }
    
    while(s.empty()==false){
        cout<<st.top();
        st.pop();
    }
    // cout<<s;
}

int main(){
    string s;
    getline(cin,s);
    reverseWord(s);
    // cout<<st;
}
