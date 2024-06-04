#include<iostream>
#include<stack>
using namespace std;

/*
class Stack{
    //properties
    public:
       int *arr;
       int top;
       int size;

    //behaviour
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack overflow " << endl;
        }
    }

    void pop(){
         if(top >= 0){
            top--;
         }
         else{
            cout << "Stack Underflow "<<endl;
         }
    }

    int peak(){
        if(top >= 0 && top < size){
            return arr[top];
        }
        else{
            cout << "Stack is empty "<< endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }


};*/

// LL implementation
class Stack{
    public: 
       int data;
       Stack* next;

       Stack(int data){
        this -> data = data;
        this -> next = NULL;
       }

       ~Stack(){
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
       }

       void push(int element, Stack* &head, Stack* & tail){
          Stack* newNode = new Stack(element);
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

       void pop(Stack* &head, Stack* &tail){
         if(head == NULL){
            cout << "Stack underflow" << endl;
         }
         else{
            //for edge case of last element
            if(head == tail){
                head = NULL;
                return;
            }
            Stack* temp = head;
            while(temp -> next != tail){
                temp = temp -> next;
            }
            temp -> next = NULL;
            tail = temp;
         }
       }

       int peak(Stack* &tail){
         if(tail == NULL){
            cout << "stack underflow"<<endl;
         }
         else{
            return tail -> data;
         }
       }

       bool isEmpty(Stack* &head){
        if(head == NULL){
            return true;
        }
        return false;
       }

       void print(Stack* &head){
         Stack* temp = head;
         while(temp != NULL){
           cout << temp -> data << " ";
           temp = temp -> next; 
        }
       }
};

int main(){

   /* //creation of stack
    stack<int> s;

    //insertion
    s.push(2);
    s.push(3);
    
    cout << "Printing top element "<<s.top()<<endl;

    //pop
    s.pop();

    cout << "Printing top element "<<s.top()<<endl;

    if(s.empty()){
        cout<<"Stack is empty. "<<endl;
    }    
    else{
        cout << "stack is not empty. "<<endl;
    }
    
    cout << "size of stack "<<s.size()<<endl;
   */

    /*Stack st(7);

    st.push(43);
    st.push(21);
    st.push(10);
    st.push(65);

    cout << st.peak() << endl;
    st.pop();
    cout << st.peak() << endl;

    if(st.isEmpty()){
        cout << "Stack is empty brooooo" << endl;
    }
    else{
        cout << "Stack is not empty "<< endl;
    }*/

    Stack *head = NULL;
    Stack *tail = NULL;
    Stack st(0);
    st.push(1, head, tail);
    st.push(3, head, tail);
    st.push(5, head, tail);
    st.print(head);

    cout << "peak element is "<<st.peak(tail)<<endl;

    st.pop(head, tail);
    st.print(head);

    cout << "peak element is "<<st.peak(tail)<<endl;
    st.pop(head, tail);
    st.print(head);

    st.pop(head, tail);
    st.print(head);
    cout << endl;

    if(st.isEmpty(head)){
        cout << "Stack is empty "<<endl;
    }
    else{
        cout << "Stack is not empty "<< endl;
    }
    


    return 0;
}