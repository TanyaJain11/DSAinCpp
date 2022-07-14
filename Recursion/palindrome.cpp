#include<bits/stdc++.h>
using namespace std;

bool Palindrome(string &str,int i){
     int j = str.length()-i-1;
    if(i>j){
        return true;
    }

   if(str[i]!=str[j]){
    return false;
   }else{
    return Palindrome(str,i+1);
   }
   
}



int main(){
    string str;
    cout<<"enter string";
    cin>>str;
    
    bool ans=Palindrome(str,0);
    if(ans){
        cout<<"string is palindrome";
    }else{
        cout<<"string is not a palindrome";
    }
    
}