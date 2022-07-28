#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string sub;
    cout<<"enter substring u want to remove";
    cin>>sub;

    while(s.length()!=0 && s.find(sub)<s.length()){
        s.erase(s.find(sub),sub.length());
    }
    cout<<s;
    return 0;
}