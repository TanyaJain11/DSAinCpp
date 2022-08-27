#include<iostream>
using namespace std;

class Node{
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for "<<value<<endl;
    }
};

\// in circular linked list we don't need head

int main()
{
    return 0;
}