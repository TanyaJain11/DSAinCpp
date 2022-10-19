
#include <bits/stdc++.h>
using namespace std;
class Concate{
private:
    string str;
    string str2;

public:
   Concate(string str,string str2){
    this->str=str;
    this->str2=str2;
   }
    //string operator+(){
      //  string str34=" ";
        //string str3=str.append();
        //string str4=str3.append(str3);
     //   strcat(str," ",str2);
      //  return str4;
    //}

};
int main(){
    string str;
    string str2;
    getline(cin,str);
    getline(cin,str2);
    //string str3=str+str2;
    cout<<str<<" "<<str2<<endl;
    return 0;

}
