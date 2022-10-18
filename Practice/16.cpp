#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }

};

void removeDublicate(Node* head){
    Node* temp = head;
    while(temp->next!=NULL){
        if(temp->data==temp->next->data){
            Node * t = temp->next;
            temp->next=temp->next->next;
            delete t;
        }
        temp=temp->next;
    }
}


void insertatHead(Node* &head,int data){
   Node* temp = new Node(data); 
   temp->next=head;
   head=temp;
}

void insertatTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtAnyPosition(Node * &head,Node * &tail,int data,int position){
    if(position==1){
        insertatHead(head,data);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    
    if(temp->next==NULL){
        insertatTail(tail,data);
    }

    Node* n = new Node(data);
    n->next=temp->next;
    temp->next= n;
}

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    // int n;
    // cin>>n;
    Node *l1 = new Node(2);
    Node* head = l1;
    Node* tail = l1;
    insertatHead(head,2);
    print(head);
    insertAtAnyPosition(head,tail,7,2);
    print(head);

    insertatHead(head,7);
    print(head);

    insertAtAnyPosition(head,tail,11,2);
    print(head);

    insertAtAnyPosition(head,tail,11,3);
    print(head);


    //  print(head);
     removeDublicate(head);
     print(head);


    

}