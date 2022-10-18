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


};



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
    Node *l1 = new Node(10);
    // cout<<l1->data<<endl;
    // cout<<l1->next;
    Node* head=l1;
    Node* tail=l1;  // jab single node hogu vo hi head h and vo hi tail h

    insertAtHead(head,13);
    print(head);

    insertAtTail(tail,12);
    print(head);
    print(tail);

    insertAtPosition(tail,head,2,22);
    print(head);

    insertAtPosition(tail,head,3,221);
    print(head);

    insertAtHead(head,222222);

    insertAtPosition(tail,head,4,220);
    print(head);

    insertAtTail(tail,120);
    print(head);
    print(tail);

    insertAtPosition(tail,head,6,220);
    print(head);

    print(tail);

    return 0;
}