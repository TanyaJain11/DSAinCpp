#include<bits/stdc++.h>
using namespace std;

void getMaxChar(string s){
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        int n=0;
        char ch=s[i];
        if(ch>='a' && ch<='z'){
            n=ch-'a';
    }else{
        n=ch-'A';
    }
    arr[n]++;
    }

    int max=-1,ans=0;
    for(int i=0;i<26;i++){
        if(max<arr[i]){
            max=arr[i];
            ans=i;
        }
    }

    char finalans=ans+'a';
    cout<<finalans;
}

int main(){
    string s;
    cin>>s;

    getMaxChar( s);

}