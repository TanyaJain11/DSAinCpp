#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z'){
            continue;
        }else{
            str[i]=str[i]-'A'+'a';
        }
    }
    cout<<str;
    return 0;
}