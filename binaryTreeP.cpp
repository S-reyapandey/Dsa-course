#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;

class Node {
    public:
     int data;
     Node* left;
     Node* right;

     Node(int d){
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
     }

     Node (){
        this->data = 0;
        this->left = nullptr;
        this->right = nullptr;
     }

     Node(int data, Node* left, Node* right){
        this->data = data;
        this->left = left;
        this->right = right;
     }
};

Node* buildTree(Node* root){
    int data;
    cin >> data;
    root = new Node(data);
    if(data == -1) return NULL;
    root->left = buildTree(root->left);
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* tmp = q.front();
        q.pop();
        if(tmp == NULL){
            cout << endl;
            if(!q.empty()) q.push(NULL);
        }
        else{
            cout << tmp->data << " ";
        }
    }
}

int main(){
    
    Node* root = NULL;
    root = buildTree(root);
    cout << "Printing the level order traversal"<<endl;
    levelOrderTraversal(root);
    reverseLevel(root);
    return 0;
}