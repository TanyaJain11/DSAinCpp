#include<iostream>
#include<cstdio>
#include<cmath>
#include <stack>
#include<queue>
using namespace std;

bool isSubString(string str,string check1,string check2){
    if(str.length()<3){
        return false;
    }
    if(str.substr(0,3)==check1||str.substr(0,3)==check2){
        return true;
    }else{
    return isSubString(str.substr(1),check1,check2);
    }
}

int main()
{
    string str;
    cin>>str;
    if(isSubString(str,"101","010")){
        cout<<"GOOD";
    }else{
        cout<<"BAD";
    }
    return 0;
}