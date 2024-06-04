#include <iostream>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{

    cout << "Enter the data: " << endl;

    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTraversal(Node* root){
      queue<Node*> q;
      q.push(root);
      q.push(NULL);

      while(!q.empty()){
        Node* temp = q.front(); // i take a whole level
        q.pop();

        //purana level complete traverse ho chuka hai
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){  //queue still has some child
                q.push(NULL);
            }
        }
        else{
            cout<< temp -> data <<" ";
            if(temp -> left){
              q.push(temp -> left);
            }
            if(temp -> right){
              q.push(temp -> right);
            }
        }
      }
}

/*void reverseLevel(Node* root){
    queue<Node*> q1;
      q1.push(root);
      q1.push(NULL);
    stack<Node*> s;

    Node* temp = NULL;

    while(!q1.empty()){
      temp = q1.front();
      q1.pop();
      //s.push(temp);

      if(temp == NULL){
        //reverse(q1.front(), q1.back());
        s.push(0);
        if(!q1.empty()){
          q1.push(NULL);
        }
      }
      else{
        s.push(temp);
        if(temp->left){
          q1.push(temp->left);
        }
        if(temp->right){
          q1.push(temp->right);
        }
      }
    }
    while(!s.empty()){
      if(s.top()==0){
        s.pop();
        
        cout<<endl;
      }
      else{
        temp = s.top();
        cout<<temp->data<<" ";
        s.pop();
      }
    }
}*/

void reverseLevel(Node* root){
  stack<Node*>s;
  queue<Node*>q;
  q.push(root);

  while(!q.empty()){
    root = q.front();
    q.pop();
    s.push(root);

    if(root -> right){
      q.push(root -> right);
    }
    if(root->left){
      q.push(root->left);
    }
  }

  while(!s.empty()){
    root = s.top();
    cout << root -> data <<" ";
    s.pop();
  }
}

void inorder(Node* root){
  //base case
  if(root == NULL){
    return;
  }

  inorder(root -> left);
  cout << root -> data << " ";
  inorder(root -> right);

}

void preorder(Node* root){
  //base case
  if(root == NULL){
    return ;
  }

  cout<<root->data<<" ";
  preorder(root -> left);
  preorder(root -> right);

}

void postorder(Node* root){
  //base case
  if(root == NULL){
    return ;
  }

  postorder(root -> left);
  postorder(root -> right);
  cout<<root->data<<" ";
}

void buildFromLevelOrder(Node* &root){
    queue<Node*> q;
    cout<<"Enter data for root"<<endl;
    int data;
    cin >> data;
    root = new Node(data);
    q.push(root);

    while(!q.empty()){
      Node* temp = q.front();
      q.pop();

      cout << "Enter left node for: "<< temp -> data << endl;
      int leftData;
      cin >> leftData;

      if(leftData != -1){
        temp -> left = new Node(leftData);
        q.push(temp -> left);
      }

      cout << "Enter right node for: "<< temp -> data << endl;
      int rightData;
      cin >> rightData;

      if(rightData != -1){
        temp -> right = new Node(rightData);
        q.push(temp -> right);
      }
    }
}

int main()
{

    Node *root = NULL;

    buildFromLevelOrder(root);
    levelOrderTraversal(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    // creating a tree
   /* root = buildTree(root);
     // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    //level order

    cout<<"Printing the level order traversal output "<<endl;
    levelOrderTraversal(root);
    reverseLevel(root);

    cout<<endl;
    cout<< "Inorder traversal is: ";
    inorder(root);

    cout<< endl<<"Preorder traversal is: ";
    preorder(root);

    cout<< endl<<"Postorder traversal is: ";
    postorder(root);*/



    return 0;
}