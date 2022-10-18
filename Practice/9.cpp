#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int hour = n/60;
    int min = n%60;
    cout<<hour<<":"<<min;
}