
#include <iostream>
using namespace std;

class Trie{
    private:
    class Node{
        public:
        Node* children[26];
        bool eow;
        Node(){
            for(int i = 0; i<26;i++){
                children[i] = NULL;
            }
            eow = false;   
        }
    };
 Node* root;
 int countNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    int count = 1;
    for(int i = 0;i<26;i++){
        if(root->children[i] !=NULL){
            count+=countNodes(root->children[i]);
        }
    }
    return count;
}
 public:
 Trie(){
     root = new Node();
 }
 void insert(string word){
     Node* curr = root;
     for(char ch: word){
         int index = ch - 'a';
         if(curr->children[index] == NULL){
             curr->children[index] = new Node();
         }
         curr = curr->children[index];
     }
     curr->eow = true;
 }
 int getNodes(){
     return countNodes(root);
 }
 
};

int main() {
    string name ="abaac";
    Trie t;
    for(int i = 0; i<name.length();i++){
        string suffix = name.substr(i);
        t.insert(suffix);
    }
      cout<<t.getNodes();
    return 0;
}