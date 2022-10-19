#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        next=NULL;
    }
};

void printList(Node* head){
    if(head==NULL){
        return;
    }
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

Node* takeInput(int n){
    int data;
    cin>>data;
    Node* head=NULL;
    Node* tail=NULL;
    int cnt=1;
    while(cnt!=n+1){
        Node* newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }else{
            tail->next=newNode;
            tail=tail->next;
        }
        if(cnt!=n){
        cin>>data;
        }
        cnt++;
    }
    return head;
}

Node* removeDuplicates(Node* head){
    if(head==NULL){
        return NULL;
    }

    Node* temp=head;
    while(temp!=NULL && temp->next!=NULL){
        Node* temp2=temp;
        while(temp2->next!=NULL){
            if(temp->data==temp2->next->data){
                temp2->next=temp2->next->next;
            }else{
                temp2=temp2->next;
            }
        }temp=temp->next;
    }

    return head;

}
int main(){
    int n;
    cin>>n;
    Node* head=takeInput(n);
    printList(head);
    removeDuplicates(head);
  printList(head);
    return 0;
}
