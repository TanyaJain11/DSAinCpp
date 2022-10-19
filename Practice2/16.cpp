#include <bits/stdc++.h>
using namespace std;

bool IsAnagram(string str1,string str2){
    if(str1.length()!=str2.length()){
        return false;
    }
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    for(int i=0;i<str1.length();i++){
        if(str1[i]!=str2[i]){
            return false;
        }
    }return true;
}
	



int main(){
    string str;
    string str2;
    getline(cin,str);
    getline(cin,str2);
    if(IsAnagram(str,str2)){
        cout<<"TRUE"<<endl;
    }else{
        cout<<"FALSE"<<endl;
    }

}

//
