#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int cnt=0;

    for(int i=0;s[i]!='\0';i++){
        cnt++;
    }
    cout<<cnt;
    return 0;
}