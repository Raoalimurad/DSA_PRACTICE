
#include    <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
   Node(int val){
       data = val;
       next = prev = NULL;
   }
};
class DoublyList{
    Node* head;
    Node* tail;
    public:
    DoublyList(){
        head = tail = NULL;
    }
    ///PUSH-FRONT
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head->prev = newNode;
             head = newNode;
        }
    }
    ///print list
    void showList(){
        Node* temp = head;
        while(temp !=NULL){
            cout<<temp->data<<"<=>";
            temp = temp->next;
        }
        cout<<"NULL\n";
    }
    
    //  push_back
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head =  tail = newNode;
        }else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    
    // pop_front
    void pop_front(){
        Node* temp =  head;
         head = head->next;
         if(head != NULL){
              head->prev = NULL;
         }
        temp->next = NULL;
         delete temp;
    }
    void pop_back(){
        Node* temp = tail;
        tail = tail->prev;
        if(tail !=NULL){
            tail->next = NULL;
        }
        temp->prev = NULL;
        delete temp;
       
        
    }
};
int main() {
   DoublyList dl;
//   dl.push_front(1);
//   dl.push_front(2);
//   dl.push_front(3);

  dl.push_back(1);
  dl.push_back(2);
  dl.push_back(3);
   dl.pop_front();
   dl.pop_back();
   dl.showList();
    return 0;
}