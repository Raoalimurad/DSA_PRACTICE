
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
class CircularList{
    Node* head;
    Node* tail;
    public:
    CircularList(){
        head = tail = NULL;
    }
    
    void IAH(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail  = newNode;
            tail->next = newNode;
        }else{
            newNode->next = head;
            head = newNode;
            tail->next = newNode;
        }
    }
    //INSERT AT TAIL
    void IAT(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            tail->next = head;
        }else{
            tail->next = newNode;
             tail = newNode;
             newNode->next = head;
        }
        
    }
    ///DELETE AT HEAD;
    void DAH(){
        if(head == NULL)return;
        if(head == tail){
            delete head;
            head = tail = NULL;
        }
        Node* temp = head;
        head = head->next;
         tail->next = head;
        temp->next = NULL;
        delete temp;
    }
    
    //Delete at Tail
    void DAT(){
        if(head == NULL) return;
        if(head == tail){
            delete tail;
            head = tail = NULL;
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        delete tail;
         tail = temp;
         tail->next = head;
    }
    
     // print list
    void printList(){
        if(head == NULL) return;
        cout<<head->data<<"->";
        Node* temp = head->next;
        while(temp != head){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<temp->data;
    }
    
};
int main() {
    CircularList cl;
    cl.IAH(1);
    cl.IAH(2);
    cl.IAH(3);
    cl.IAT(5);
    cl.IAT(6);
    cl.DAH();
    cl.DAT();
    cl.printList();

    return 0;
}