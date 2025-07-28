
#include <iostream>
#include <algorithm>

using namespace std;
class Node{
    public:
    int data,height;
    Node *left,*right;
    Node(int val){
        data = val;
        height = 1;
        left = right = NULL;
    }
};
int getHeight(Node* root){
    if(root == NULL){
        return 0;
    }
    return root->height;
}
int getBalance(Node* root){
    return getHeight(root->left)-getHeight(root->right);
}
Node* rightRotation(Node* root){
    if(root ==NULL || root->left == NULL){
        return root;
    }
     Node* child = root->left;
     Node* childRight = child->right;
     child->right = root;
     root->left = childRight;
     
    //  UPDATE HEIGHT
    root->height = 1+ max(getHeight(root->left),getHeight(root->right));
    child->height = 1+ max(getHeight(child->left),getHeight(child->right));
    return child;
}


Node* leftRotation(Node* root){
      if(root ==NULL || root->right == NULL){
        return root;
    }
    Node* child = root->right;
    Node* childleft = child->left;
    child->left = root;
    root->right = childleft;
    
     //  UPDATE HEIGHT
    root->height = 1+ max(getHeight(root->left),getHeight(root->right));
    child->height = 1+ max(getHeight(child->left),getHeight(child->right));
    return child;
}



////insertion
Node* insert(Node* root,int key){
    // does not exist
     if(!root){
         return new Node(key);
     }
    // does exist
    if(key<root->data){
     root->left = insert(root->left,key);
    }else if(key>root->data){
        root->right =insert(root->right,key);
    }else{
        return root; ///duplicate not allowed
    }
    
    ///update height
    root->height = 1+ max(getHeight(root->left),getHeight(root->right));
    
    ///Balancing check
    int balance = getBalance(root);
    
    ///left left case
    if(balance > 1 && key < root->left->data){
       return rightRotation(root);
    }
    ///right right case
    else if(balance<-1 && key > root->right->data){
       return leftRotation(root);
    }
    //left right case
     else if(balance >1 && root->left->data < key){
       root->left = leftRotation(root->left);
       return  rightRotation(root);
     }
    ////right left case
     else if(balance <-1 && key< root->right->data){
       root->right =  rightRotation(root->right);
        return leftRotation(root);
     }
    ///no unbalance
    else{
        return root;
    }
}
void preOrder(Node* root){
    if(!root){
        return ;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
int main() {
 Node* root = NULL;
//  duplicates are not allowed
  root = insert(root,10);
  root = insert(root,30);
  root = insert(root,20);
  root = insert(root,50);
  root = insert(root,40);
  root = insert(root,60);
  root = insert(root,70);
  root = insert(root,90);

   cout<<"preOrder"<<endl;
   preOrder(root);
    return 0;
}