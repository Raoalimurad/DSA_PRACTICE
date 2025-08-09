
#include <iostream>
#include<string>
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
string ans = "";

void longestWord(Node* root, string temp) {
    if (root == NULL) return;

    for (int i = 0; i < 26; i++) {
        Node* child = root->children[i];
        if (child != NULL && child->eow == true) {
            temp.push_back('a' + i); // or temp += (char)(i + 'a');

            if (temp.length() > ans.length()) {
                ans = temp;
            }

            longestWord(child, temp);
            temp.pop_back(); // Backtrack
        }
    }
}

public:
Trie(){
    root = new Node();
}
string getWord(){
    longestWord(root,"");
    return ans;
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

};
int main() {
    string words[] = {"a","banana","app","appl","ap","apple","apply"};
    Trie t;
    int n = sizeof(words) / sizeof(words[0]);
     for(int i = 0; i< n;i++){
    t.insert(words[i]);
     }
      cout<<t.getWord();
    return 0;
}