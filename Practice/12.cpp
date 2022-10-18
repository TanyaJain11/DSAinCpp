#include<bits/stdc++.h>
using namespace std;

int main(){
    string st;
    getline(cin,st);

    // for(int i=0;i<st.length();i++){
    //     string s="";
    //     s+=st[i];
    //     if(st[i]==' '){
    //         if(s=="SAM"){
    //             for(int j=)
    //         }
    //     }
    // }
    int index;

    while((index = st.find("RAM")) != string::npos) {    //for each location where Hello is found
      st.replace(index,3,"SAM"); //remove and replace from that position
   }

   cout<<st;
}