#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
       int data;
       Node* next;

       //constructor
       Node(int d){
        this->data = d;
        this->next = NULL;
       }

       ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory is free for node with data "<<value <<endl;
       }
};

void insertNode(Node* &tail, int element, int d){
    //assuming that the element is present in the list

    //empty list
    if(tail == NULL){
        Node * newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        //non-empty list
        //assuming that the element is present int the list

        Node* curr = tail;
        while(curr -> data != element){
            curr = curr -> next;
        }

        //elemnt found -> curr is representing element wala node
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void print(Node* tail){
    Node* temp = tail;
    /*while(tail -> next != temp){
        cout<< tail->data<<" ";
        tail = tail -> next;
    }
    cout << " ";  ---> it will not print elemnt when list is empty*/ 

    if(tail == NULL){
        cout << "List is empty"<<endl;
        return;
    }
    do{
       cout<< tail->data<<" ";
       tail = tail -> next;
    }while(tail != temp);
    cout<<endl;
}

void deleteNode(Node* &tail, int value){
    //empty 
    if(tail == NULL){
        cout<<"List is empty, please check again "<<endl;
        return;
    }
    else{
        //non-empty
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value){
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr->next;

        //1 node linked list
        if(curr == prev){
           tail = NULL;
        }

        else if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
    

}

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

bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }
    
    map <Node*, bool> m;
   
    Node* temp = head -> next;
    while(temp != NULL){
        //cycle is present
        if(m[temp] == true){
            return true;
        }

        m[temp] = true;
        temp = temp->next;
    }

    return false;
}

Node* floydDetectLoop(Node* head){
    //base case
    if(head == NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;

        if(slow == fast){
            cout<<"present at "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;

    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;
}

void removeLoop(Node* head){
    if(head == NULL){
        return ;
    }

    Node* StartOfLoop = getStartingNode(head);
    Node* temp = StartOfLoop;
    while(temp -> next != StartOfLoop){
        temp = temp -> next;
    }
    temp -> next = NULL;
}

int main()
{
    Node* tail = NULL;

    //empty list
    insertNode(tail, 5, 3);
    print(tail);
    
    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 7, 8);
    print(tail);

    insertNode(tail, 8, 9);
    print(tail);

    deleteNode(tail, 5);
    print(tail);

    deleteNode(tail, 9);
    print(tail);
   
    if(isCircularList(tail)){
        cout<<"Linked List is Circular"<<endl;
    }
    else{
        cout<<"It is not a circular Linked List"<<endl;
    }

    if(floydDetectLoop(tail) != NULL){
        cout<<"Cycle is present"<<endl;
    }
    else{
        cout<<"Cycle is not present"<<endl;
    }

    cout << getStartingNode(tail) -> data <<endl;
    removeLoop(tail);
    print(tail);
    if(floydDetectLoop(tail) != NULL){
        cout<<"Cycle is present"<<endl;
    }
    else{
        cout<<"Cycle is not present"<<endl;
    }

    return 0;
}