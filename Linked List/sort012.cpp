/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/
//bubble sort
/*
Node* sortList(Node *head){
    // Write your code here.
    if(head == NULL){
        return NULL;
    }

    Node* curr = head;
    while(curr -> next != NULL){

       Node* temp = curr -> next;
       while(temp!=NULL){
           if(curr -> data >= temp -> data){
               swap(curr -> data, temp -> data);
           }
           temp = temp -> next;
       }
       
       curr = curr -> next;
    }
    return head;

}*/

//love babbar approach
//Aproach 1 by taking count of each member
/*
Node* sortList(Node *head){
    int zerocount = 0;
    int onecount = 0;
    int twocount = 0;

    Node* temp = head;
    while(temp != NULL){
        if(temp -> data == 0){
            zerocount++;
        }
        else if(temp -> data == 1){
            onecount++;
        }
        else if(temp -> data == 2){
            twocount++;
        }

        temp = temp -> next;
    }

    temp = head;

    while(temp != NULL){
        if(zerocount != 0){
            temp -> data = 0;
            zerocount--;
        }
        else if(onecount != 0){
            temp -> data = 1;
            onecount--;
        }
        else if(twocount != 0){
            temp -> data = 2;
            twocount--;
        }
        temp = temp -> next;
    }
    return head;
}*/

//Approach 2
//By making separate list of each element
void insertAtTail(Node* &tail, Node* curr){
   tail -> next = curr;
   tail = curr;  
}

Node* sortList(Node* head){
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* curr = head;

    //create separate list of 0's, 1's and 2's
    while(curr != NULL){

        int value = curr -> data;

        if(value == 0){
            insertAtTail(zeroTail, curr);
        }
        else if(value == 1){
            insertAtTail(oneTail, curr);
        }
        else if(value == 2){
            insertAtTail(twoTail, curr);
        }

        curr = curr -> next;
    }

    //merge 3 sublist

    if(oneHead -> next != NULL){  // lizt of 1's is non empty
        zeroTail -> next = oneHead -> next;
    }
    else{
        //1's list -> empty
        zeroTail -> next = twoHead -> next;
    }

    oneTail -> next = twoHead -> next;
    twoTail -> next = NULL;

    //setup head
    head = zeroHead -> next;

    //delete dummy node;
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}