#include<bits/stdc++.h>
using namespace std;

void reverseString(string &str,int i){
     int j = str.length()-i-1;
   if(i>j){
    return;
   }

   swap(str[i],str[j]);
   i++;

   reverseString(str,i);

   
}



int main(){
    string str;
    cout<<"enter string";
    cin>>str;
    
    reverseString(str,0);
    cout<<str;
}