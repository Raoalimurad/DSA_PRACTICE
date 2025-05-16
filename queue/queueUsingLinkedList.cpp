
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
class Queue{
    Node* head;
    Node* tail;
    public:
    Queue(){
        head = tail = NULL;
    }
    
    int front(){
        return head->data;
    }
    
    void push(int val){
        Node* newNode = new Node(val);
        if(empty()){
            head = tail = newNode;
        }else{
           tail->next = newNode;
           tail = newNode;
        }
        
    }
    
    void pop(){
        if(empty()){
            cout<<"queue is empty";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    bool empty(){
        return head == NULL;
    }
    
};
int main() {
  Queue qq;
   qq.push(1);
   qq.pop();
  qq.push(5);
  qq.push(3);
  
  cout<<qq.front();

    return 0;
}