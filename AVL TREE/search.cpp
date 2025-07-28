bool search(Node* root, int key) {
    if (root == NULL)
        return false;

    if (key == root->data){
    cout<<"ohoo mel gya";
        return true;}
    else if (key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}