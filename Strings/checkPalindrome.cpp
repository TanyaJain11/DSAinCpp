#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string temp = s;
    
    int i=0;
    int j=temp.size()-1;

    while(i<j){
        swap(temp[i++],temp[j--]);
    }

    if(s==temp){
        cout<<"string is palindrome";
    }else{
        cout<<"string is not a palindrome";
    }
    
    return 0;
}