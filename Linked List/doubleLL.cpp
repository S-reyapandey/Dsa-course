#include<iostream>
using namespace std;

class Node{
    public:
       int data;
       Node* prev;
       Node* next;

    //constructor
    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }

    //dewtructor
    ~Node(){
        int val = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data "<<val<<endl;
    }
};

void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}

void InsertAtHead(Node* &head, int d){
    //empty list
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
    }
    else{
      Node* temp = new Node(d);
      temp -> next = head;
      head -> prev = temp;
      head = temp;
    }
}

void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);

    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}

void InsertAtPosition(Node* & tail, Node* & head, int position, int d){
    //insert at start
    if(position == 1){
        InsertAtHead(head, d);
        return ;
    }
    
    Node* temp = head;
     int cnt = 1;

    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    //inserting at last position
    if(temp->next == NULL){
        InsertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

void deleteNode(Node* &tail, Node* &head, int position){
     
    //starting node
    if(position == 1){
        Node *temp = head;
        //memory free start node
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }

    else{
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
             prev = curr;
             curr = curr -> next;
             cnt++;
        }

        if( curr -> next == NULL){
            tail = prev;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    
    cout<<getLength(head)<<endl;;
    print(head);
    cout << "head "<< head -> data << endl;
    cout << "tail "<< tail -> data << endl;

    InsertAtHead(head, 12);
    print(head);
    cout << "head "<< head -> data << endl;
    cout << "tail "<< tail -> data << endl;


    InsertAtHead(head, 6);
    print(head);
    cout << "head "<< head -> data << endl;
    cout << "tail "<< tail -> data << endl;


    InsertAtHead(head, 9);
    print(head);
    cout << "head "<< head -> data << endl;
    cout << "tail "<< tail -> data << endl;


    InsertAtTail(tail, 25);
    print(head);
    cout << "head "<< head -> data << endl;
    cout << "tail "<< tail -> data << endl;


    InsertAtPosition(tail, head, 3, 31);
    print(head);
    cout << "head "<< head -> data << endl;
    cout << "tail "<< tail -> data << endl;
 
    deleteNode(tail, head, 4);
    print(head);
    cout << "head "<< head -> data << endl;
    cout << "tail "<< tail -> data << endl;

    return 0;
}