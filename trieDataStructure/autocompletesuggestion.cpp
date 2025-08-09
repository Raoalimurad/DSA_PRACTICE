
#include <iostream>
#include<string>
#include<vector>
using namespace std;
class Trie{
    private:
    class Node{
        public:
        Node* children[26];
        bool eow;
        Node(){
            for(int i= 0; i<26;i++){
                children[i] = NULL;
            }
            eow = false;
        }};
    Node* root;


public:
Trie(){
    root = new Node();
}
void dfs(Node* curr,string prefix,vector<string>&result){
    if(curr->eow){
        result.push_back(prefix);
    }
    for(int i = 0 ; i<26;i++){
        if(curr->children[i]){
            dfs(curr->children[i],prefix+char(i+'a'),result);
        }
    }
}
void insert(string word) {
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
  vector<string> autoComplete(string prefix){
      Node* curr = root;
      for(char ch:prefix){
          int index = ch-'a';
          if(!curr->children[index]) return{};
          curr=curr->children[index];
      }
      vector<string> result;
      dfs(curr,prefix,result);
      return result;
  }

};
int main() {
    string words[] = {"a","banana","app","appl","ap","apple","apply"};
    Trie t;
    int n = sizeof(words) / sizeof(words[0]);
     for(int i = 0; i< n;i++){
    t.insert(words[i]);
     }
     string inputPrefix = "ap";
    vector<string> suggestions = t.autoComplete(inputPrefix);

    cout << "Autocomplete suggestions for \"" << inputPrefix << "\":" << endl;
    for (string word : suggestions) {
        cout << word << endl;
    }
      
    return 0;
}