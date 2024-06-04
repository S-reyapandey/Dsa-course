/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *random;
 *		Node() : data(0), next(nullptr), random(nullptr){};
 *		Node(int x) : data(x), next(nullptr), random(nullptr) {}
 *		Node(int x, Node *next, Node *random) : data(x), next(next), random(random) {}
 * };
 */
#include "unordered_map"
void insertAtTail(Node* &head, Node* &tail, int d){
    Node* newNode = new Node(d);
	if(head == NULL){
		head = newNode;
		tail = newNode;
		return;
	}
	else{
		tail -> next = newNode;
		tail = newNode;
	}
}

Node *cloneLL(Node *head){
	// Write your code here
	//step1 -> create a clone list
	Node* cloneHead  = NULL;
	Node* cloneTail = NULL;
    
	Node* temp = head;

	while(temp != NULL){
        insertAtTail(cloneHead, cloneTail, temp -> data);
        temp = temp -> next;
	}

	//step2 -> create a map
	unordered_map<Node*, Node*> oldToNewNode;

	Node* originalNode = head;
	Node* cloneNode =  cloneHead;
	while(originalNode != NULL && cloneNode != NULL){

		oldToNewNode[originalNode] = cloneNode;
		originalNode = originalNode -> next;
		cloneNode = cloneNode -> next;

	}

	originalNode = head;
	cloneNode = cloneHead;

	while(originalNode != NULL){
		cloneNode -> random = oldToNewNode[originalNode -> random];
		originalNode = originalNode -> next;
		cloneNode = cloneNode -> next;
	}

	return cloneHead;

}