#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure:
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }
    };

************************************************************/


Node<int>* reverse(Node<int>* head){
    Node<int>* curr = head;
    Node<int>* prev = NULL;
    Node<int>* next = NULL;

    while(curr != NULL){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void insertAtTail(Node<int>* &head, Node<int>* &tail, int val){
    
    Node<int>* temp = new Node<int>(val);
    
    if(head == NULL){
       head = temp;
       tail = temp;
       return;
    }
    else{
        tail -> next = temp;
        tail = temp;
    }
}

Node<int>* add(Node<int>* first, Node<int>* second){
    int carry = 0;

    Node<int>* ansHead = NULL;
    Node<int>* ansTail = NULL;

    while(first!=NULL && second!=NULL){

        int sum = carry + first -> data + second -> data;
        int digit = sum%10;
        
        //create node and ans in LL
        insertAtTail(ansHead, ansTail, digit);

        carry = sum/10;
        first = first -> next;
        second = second -> next;
    }

    while(first != NULL){
        int sum = carry + first->data;
        int digit = sum%10;
        //create a node and add in answer LL
        insertAtTail(ansHead, ansTail, digit);
        carry = sum/10;
        first = first -> next;
    }

    while(second != NULL){
        int sum = carry + second->data;
        int digit = sum%10;
        //create a node and add in answer LL
        insertAtTail(ansHead, ansTail, digit);
        carry = sum/10;
        second = second -> next;
    }

    while(carry != 0){
        int sum = carry;
        int digit = sum%10;
        //create node and add in answer LL
        insertAtTail(ansHead, ansTail, digit);
        carry = sum/10;
    }
    return ansHead;
}

Node<int>* addTwoLists(Node<int>* first, Node<int>* second) {
    // Write your code here.
    //step1 -> reverse LL
    first = reverse(first);
    second = reverse(second);

    //step 2 -> add two LL
    Node<int>* ans = add(first, second);

    //step3 -> reverse ans
    ans = reverse(ans);

    return ans;
}