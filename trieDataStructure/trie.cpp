
#include <iostream>
using namespace std;
class trie{
    private:
    class Node{
        public:
        Node* children[26];
        bool eow;
        Node(){
            for(int i = 0; i< 26;i++){
                children[i] = NULL;
            }
            eow = false;
        }
    };
    
 Node* root;
    public:
    trie(){
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
 
 bool search(string key){
      Node* curr = root;
      for(char ch: key){
          int index = ch - 'a';
          if(curr->children[index] == NULL){
              return false;
          }
          curr = curr->children[index];
      }
      return curr->eow == true;
 }
 
};
int main() {
       trie t;
    t.insert("the");
    t.insert("there");
    t.insert("their");
    
    cout << (t.search("the") ? "Found\n" : "Not Found\n");
    cout << (t.search("ther") ? "Found\n" : "Not Found\n");
    cout << (t.search("their") ? "Found\n" : "Not Found\n");
    cout << (t.search("them") ? "Found\n" : "Not Found\n");

    return 0;
}