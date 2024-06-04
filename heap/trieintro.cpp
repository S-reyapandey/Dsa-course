#include<iostream>
using namespace std;

class TrieNode{
    
    public: 
       char data;
       TrieNode* children[26];
       bool isTerminal;

       TrieNode(char ch){
          data = ch;
          for(int i = 0; i<26; i++){
             children[i] = NULL;
          }

          isTerminal = false;
       }



};

class Trie{

    public:

      TrieNode* root;

      Trie() {
        root = new TrieNode('\0');
      }

      void insertUtil(TrieNode* root, string word){
           //base case
           if(word.length() == 0){
              root->isTerminal = true;
              return;
           }
           
           //assumption, word will be in Caps
           int index = word[0] - 'A';
           TrieNode* child;
           

           //present
           if(root -> children[index] != NULL){
               child = root->children[index];
           }
           else{
            //absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
           }

           //recursion
           insertUtil(child, word.substr(1));
      }

      void insertWord(string word){
           insertUtil(root, word);
      }

      bool searchUtil(TrieNode* root, string word){
           //base case
           if(word.length() == 0){
            return root->isTerminal;
           }
           int index = word[0] - 'A';
           TrieNode* child;

           if(root->children[index] != NULL){
            child = root->children[index];
           }
           else{
            //absent
            return false;
           }

           //recursion
           return searchUtil(child, word.substr(1));
      }

      bool searchWord(string word){
          return searchUtil(root, word); 
      }

      bool isEmpty(TrieNode* root){
        for(int i=0; i<26; i++){
            if(root -> children[i]){
                return false;
            }
            return true;
        }
      }

      TrieNode* deleteUtil(TrieNode* root, string word){
         if(root == NULL){
            return NULL;
         }

         //last character being processed
         if(word.length() == 0){
            //this will not be a word after removal
            if(root -> isTerminal){
                root -> isTerminal = false;
            }

            if(isEmpty(root)){
                delete root;
                root = NULL;
            }
            return root;
         }

         //recursion call
         int index = word[0] - 'A';
         root->children[index] = deleteUtil(root->children[index], word.substr(1));

         //backtracking
         //if root has no child(as it's only child got deleted) and it is also not end of any other word
         if(isEmpty(root) && root->isTerminal == false){
            delete root;
            root = NULL;
         }

         return root;
      }

      TrieNode* deleteWord(string word){
         return deleteUtil(root, word);
      }
};

int main(){
    
    Trie* t = new Trie();

    t->insertWord("ARM");
    t->insertWord("DO");
    t->insertWord("TIME");
    cout<< "Present or not " << t->searchWord("ARM") << endl;
    t->deleteWord("ARM");
    cout << "present or not "<< t->searchWord("ARM") << endl;

    return 0;
}
