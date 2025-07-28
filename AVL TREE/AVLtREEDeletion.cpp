/* Node is as follows:

struct Node
{
    int data, height;
    Node *left, *right;
    Node(int x)
    {
        data = x;
        height = 1;
        left = right = NULL;
    }
};

*/
int getHeight(Node* root){
    if(root == NULL){
        return 0;
    }
    return root->height;
}
int getBalance(Node* root){
    if(root == NULL){
        return 0;
    }
    return getHeight(root->left) - getHeight(root->right);
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

Node* deleteNode(Node* root, int key) {
    // add code here,
    if(!root){
        return NULL;
    }
    if(key<root->data){
        root->left = deleteNode(root->left,key);///left side check
        
    }else if(key>root->data){
        root->right = deleteNode(root->right,key);/// right side check
    }
    else{
        ////leaft node
         if(!root->right && !root->left){
             delete root;
             return NULL;
         }
         
        ///only one child exist
         else if(root->left && !root->right){ //left one child exist
             Node* temp = root->left;
              delete root;
              return temp;
         }else if(root->right && !root->left){ /// right one child exist
             Node* temp = root->right;
             delete root;
             return temp;
         }
        /// both child exist
        else{
            ///find right side smallest element
            Node* curr = root->right;
            while(curr->left){
                curr = curr->left;
            }
            
            root->data = curr->data;
            root->right = deleteNode(root->right,curr->data);
        }
        }
        ///update the height
     root->height = 1+max(getHeight(root->left),getHeight(root->right)) ;
     
     ///check the balancing
     int balance = getBalance(root);
     
     // Left Left Case
if(balance > 1 && getBalance(root->left) >= 0)
    return rightRotation(root);

// Left Right Case
if(balance > 1 && getBalance(root->left) < 0) {
    root->left = leftRotation(root->left);
    return rightRotation(root);
}

// Right Right Case
if(balance < -1 && getBalance(root->right) <= 0)
    return leftRotation(root);

// Right Left Case
if(balance < -1 && getBalance(root->right) > 0) {
    root->right = rightRotation(root->right);
    return leftRotation(root);
}

    return root;
     
     
     
     
     
     
     
     
    
}