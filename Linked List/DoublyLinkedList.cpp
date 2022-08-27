#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }

    ~Node(){
        int val = this->data;
        if(next!=NULL){
            delete next;
            next = NULL;
        }

        cout<<"memory free for node with data "<<val<<endl;
    }

};

void insertAtHead(Node* &head,Node* &tail,int data){

    // if initially empty list means head == NULL
    if(head==NULL){
         Node* temp = new Node(data);
         head=temp;
         tail = temp;
    }else{
    Node* temp = new Node(data);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    

}

void insertAtTail(Node* &tail,Node* &head,int data){
    if(tail==NULL){
        Node* temp = new Node(data);
        tail=temp;
        head=temp;
    }else{
    Node* temp = new Node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }
}

void insertAtPosition(Node* &head,Node* &tail,int position,int data){
    if(position==1){
        insertAtHead(head,tail,data);
        return;
    }
    int cnt=1;
    Node* temp =head;

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    if(temp->next==NULL){
        insertAtTail(tail,head,data);
        return;
    }

    Node* nodeToInsert = new Node(data);
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
}
void deletion(Node* &head,Node* &tail,int position){
        if(position==1){
            Node* temp = head;
            temp->next->prev=NULL;
            head=temp->next;
            temp->next=NULL;
            delete temp;
        }else{
            //deleting any middle or last node
            Node* curr = head;
            Node* temp = NULL;

            int cnt=1;
            while(cnt<position){
                temp=curr;
                curr=curr->next;
                cnt++;
            }
            if(curr->next==NULL){
                tail=curr->prev;
            }

            curr->prev=NULL;
            temp->next=curr->next;
            curr->next=NULL;
            delete curr;
        }
}

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node* l1 = new Node(11);
    Node* head = l1;
    Node* tail = head;

    print(head);
    insertAtHead(head,tail,12);
    insertAtHead(head,tail,13);
    insertAtHead(head,tail,14);
    print(head);

    insertAtTail(tail,head,66);
    print(head);

    insertAtPosition(head,tail,2,102);
    print(head);

    insertAtPosition(head,tail,7,107);
    print(head);
    
    deletion(head,tail,2);
    print(head);

     deletion(head,tail,6);
    print(head);
    print(tail);

    deletion(head,tail,5);
    print(head);
    print(tail);

    return 0;
}