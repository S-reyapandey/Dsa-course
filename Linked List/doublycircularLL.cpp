#include<iostream>
using namespace std;

class Node{
    public:
      int data;
      Node* next;
      Node* prev;

    //constructor
    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }

    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }
        cout << "memory is free for node with data "<<value <<endl;
    }
};

void print(Node* tail){
    Node* temp = tail;
    if(tail == NULL){
        cout << "List is empty "<< endl;
        return ;
    }
    do 4{
        cout << tail->data <<" ";
        tail = tail -> next;
    }while(tail != temp);
    cout <<endl;
}

void insertNode(Node* &tail, int element, int d){
    //empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode->prev;
    }
    else{
        //non-empty list
        Node* curr = tail;
        while(curr -> data != element){
            curr = curr -> next;
        }

        //element found -> curr is representing element wala node
        Node* nodeToInsert = new Node(d);
        nodeToInsert -> next = curr -> next;
        curr -> next -> prev = nodeToInsert;
        curr -> next = nodeToInsert;
        nodeToInsert -> prev = curr;
    }
}

int main()
{
   /* Node* node1 = new Node(3);
    Node* tail = node1;
    print(tail);*/

    Node* tail = NULL;
    print(tail);
    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 90);
    print(tail);

    return 0;
}

    