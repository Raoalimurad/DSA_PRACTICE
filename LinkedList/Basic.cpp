
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
     Node* next;
     Node(int val){
         data = val;
         next = NULL;
     }
};
class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head = tail = NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }
    void printList(){
        Node *temp = head;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
    }
    
    void pop_front(){
        if(head == NULL){
            cout<<"list is empty";
            return;
        }
        Node* temp = head;
        head = head->next;
         temp->next = NULL;
         delete temp;
       
    }
    void pop_back(){
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
         tail = temp;
    }
};
int main() {
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.pop_front();
    ll.pop_back();
   ll.printList();

    return 0;
}














#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

public:
    List() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;  // Corrected line
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printList() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;  // End of list
    }
    void insertion(int pos,int val){
        if(pos<0){
            cout<<"invalid postion";
            return;
        }
        if(pos == 0){
            push_front(val);
            return;
        }
        Node* newNode = new Node(val);
        Node* temp = head;
        for(int i = 0; i<pos-1;i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    int search(int key){
        Node* temp = head;
        int idx;
        while(temp != NULL){
            if(temp->data == key){
                return idx;
            }
            temp= temp->next;
            idx++;
        }
        return -1;
    }
};

int main() {
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.insertion(2,9);
    
    ll.printList();
     cout<<ll.search(9);
    return 0;
}
