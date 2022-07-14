#include<iostream>
using namespace std;

int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
         count ++;
    return count;
}


  
//         int cnt=0;
//         for(int i=0;s[i]!='/0';i++){
//             cnt++;
//         }
//         cout<<cnt;


int main(){

    char name[20];
    cout <<"Enter your name"<< endl;
    cin >> name;
    // name[2]='\0';
    cout <<"Your name is";
    cout << name << endl;
    cout <<"Length:"<< getLength(name)<< endl;
    return 0;
 }