#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    
    //constructor
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~Node(){
        int value = this->data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data "<< value <<endl;
    }
};

void InsertAtHead(Node* &head, int d){
    //new node create
    Node* temp = new Node(d);

    temp->next = head;
    head = temp;
}

void InsertAtTail(Node* &tail, int d){
    //new node create
    Node* temp = new Node(d);

    tail->next = temp;
    tail = temp;
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void InsertAtPosition(Node* &tail, Node* &head, int position, int d){

    //insertion at head
    if(position == 1){
        InsertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    //to reach the position after which we have to add a element
    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    //insertion at last position
    if(temp -> next == NULL){
        InsertAtTail(tail, d);
        return;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;

}

void deleteNode(int position, Node* & head, Node* & tail){

    //starting node
    if(position == 1){
        Node *temp = head;
        head = head -> next;
        //memory free start node
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

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

void reverse(Node* &head, Node* curr, Node* prev){
       //base case
    if(curr == NULL){
        head = prev;
        return;
    }

    Node* forward = curr -> next;
    reverse(head, forward, curr);
    curr -> next = prev;
}

Node* reverseLinkedList(Node *head) // --> recursive approch
{

    Node* curr = head;
    Node* prev = NULL;
    reverse(head, curr, prev);
    return head;
}

/*Node* reverseLinkedList(Node *head){
    if(head == NULL || head -> next == NULL){ ---> itrative approch
        return head;
    }
    Node * prev = NULL;
    Node * curr = head;
    Node * forward = NULL;

    while(curr != NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}*/

bool isCircularList(Node* head){
    if(head == NULL){
        return true;
    }
    

    Node* temp = head -> next;
    while(temp != NULL && temp != head){
        temp = temp -> next;
    }

    if(temp == head){
        return true;
    }

    return false;
}


int main()
{

    Node *node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    //head pointed to node1;
    Node* head = node1;
    Node* tail = node1;
    print(head);

    InsertAtTail(tail, 12);
    print(head);

    InsertAtTail(tail, 15);
    print(head);

    InsertAtPosition(tail, head, 3, 24);
    print(head);

   // cout << "head " << head -> data << endl;
    //cout << "tail " << tail -> data <<endl;

   // deleteNode(4, head, tail);
   // print(head);

    
   // cout << "head " << head -> data << endl;
   // cout << "tail " << tail -> data <<endl;

    reverseLinkedList(head);
    print(head);

    if(isCircularList(tail)){
        cout<<"Linked List is Circular"<<endl;
    }
    else{
        cout<<"It is not a circular Linked List"<<endl;
    }
    
    return 0;
}