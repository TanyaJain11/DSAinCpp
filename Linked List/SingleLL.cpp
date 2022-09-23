#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    
    Node(int data){
        this->data = data;
        this->next=NULL;
    }

     ~Node(){
        int value=this->data;
        // memory free
        if(this->next !=NULL){
            cout<<"fee";
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for data "<<value<<endl;
    }

};

void deleteNode(int position,Node* &head, Node* &tail){
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        //memory free next node
        delete temp;
    }else{
        //deleting any middle or last node
        Node* curr=head;
        Node* previous=NULL;

        int cnt=1;

        while(cnt<position){
            previous=curr;
            curr=curr->next;
            cnt++;
        }

        if(curr->next==NULL){
            previous->next=NULL;
            tail = previous;
            delete curr;
            return;
        }
        previous->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}


void insertAtHead(Node* &head,int data){
    //create new node
    Node *n2=new Node(data);
    n2->next=head;
    head=n2;

}

void insertAtTail(Node* &tail,int data){
    Node* temp = new Node(data); // ye  null ko point krri 
    tail->next=temp;            // ab humme tail ke next ko new node pr point krana
    tail=temp;            // ab tail hamari new node h

}



void insertAtPosition(Node* &tail,Node* head,int position,int data){
    if(position==1){
        insertAtHead(head,data);
        return; 
    }

    //n postion pr insert krna h to we have to traverse till n-1
    Node* temp = head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    //inserting at last position
     if(temp -> next == NULL) {
        insertAtTail(tail,data);
        return ;
    }
    // creating a node for data
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int main()
{
    Node* l1 = new Node(10);
    Node* head = l1;
    Node* tail =l1;

    insertAtPosition(tail,head,2,20);
    print(head);

    insertAtPosition(tail,head,3,30);
    print(head);

    print(head);
     

    cout<<"calling deletion";
    deleteNode(3,head,tail);

    // print(head);

    cout<<"calling deletion";
    //  deleteNode(2,head);

    print(head);
    print(tail);
    return 0;
}