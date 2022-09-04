#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next =NULL;
    }
};

void search(Node* head,int d){
    Node* temp = head;
    int pos=1;
    while(temp!=NULL){
        if(temp->data == d){
            cout<<"present at "<<pos;
        }
        temp=temp->next;
        pos++;
    }
}

void print(Node* head){
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
   Node* l1 = new Node(10);
   Node* l2  = new Node(20);
   Node* head = l1;
   head->next = l2;

   Node* l3 = new Node(30);
   Node* l4  = new Node(40);

   l2->next = l3;
   l3->next=l4;

   print(head);
   search(head,20);

}