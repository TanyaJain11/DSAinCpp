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
    }Node* temp=head;
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
        }if(cnt!=n){
            cin>>data;
        }cnt++;
    }
    return head;
}




Node* reverseKth(Node* head,int n,int k){
    if(head==NULL){
        return NULL;
    }
   int cnt=n-k;
   Node* temp1=head;
   int i=0;
   while(i!=k-1){
    temp1=temp1->next;
    i++;
   }

   int m=0;
Node* temp2=head;
   while(m!=cnt){
        temp2=temp2->next;
        m++;
   }
   int d=temp1->data;
   temp1->data=temp2->data;
   temp2->data=d;
   return head;


}

int main(){
    int n;
    cin>>n;
    Node* head=takeInput(n);
    int k;
    cout<<"Enter k"<<endl;
    cin>>k;
    Node* head2=reverseKth(head,n,k);
    printList(head2);
    return 0;
}
