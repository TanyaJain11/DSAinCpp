#include<bits/stdc++.h>
using namespace std;

class Hero{

    public:
    char *name = new char[100];
    int level;

    void setName(char name[]){
       strcpy(this->name,name);
    }

    void print(){
        cout<<this->name;
        cout<<this->level;
    }


};


int main(){
    Hero a;

    char name[]="b";
    a.setName(name);
    a.level=10;

    Hero c(a);
    c.print();
    a.print();
    char name1[]="bb";
    a.setName(name1);
    a.print();
    c.print();




}