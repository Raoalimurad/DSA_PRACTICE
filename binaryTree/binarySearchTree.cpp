
#include <iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        right = left = NULL;
    }
};
Node* insert(Node* root,int val){
    if(root == NULL){
        return new Node(val);
    }
    if(val < root->data){
        root->left = insert(root->left,val);
    }else{
        root->right = insert(root->right,val);
    }
    return root;
}
Node* buildBST(vector<int> arr){
    Node* root = NULL;
    for(int val: arr){
        root = insert(root,val);
    }
    return root;
}
Node* getInorderSuccessor(Node* root){
    while(root != NULL && root->left != NULL){
        root  = root->left;
    }
    return root;
}
Node* delNode(Node* root,int key){
    if(root == NULL){
        return NULL;
    }
    if(key < root->data){
        root->left = delNode(root->left,key);
    }else if(key > root->data){
        root->right = delNode(root->right,key);
    }else{
        if(root->left == NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }else if( root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }else{
            Node* IS = getInorderSuccessor(root->right);
            root->data = IS->data;
           return root->right =  delNode(root->right,IS->data);
            
        }
         
        
    }
     return root;  
}
void inOrder(Node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
int main() {
    vector<int> arr = {3,2,1,4,5,6};
   Node* root = buildBST(arr);
   inOrder(root);
   delNode(root,5);
    inOrder(root);
    return 0;
}