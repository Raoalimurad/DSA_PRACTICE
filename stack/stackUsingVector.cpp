
#include <iostream>
#include<vector>
using namespace std; 

class Stack{
    vector<int>s;
    public:
    void push(int val){
        s.push_back(val);
    }
    void pop(){
        s.pop_back();
    } 
     
    int top(){
        return s[s.size()-1];
    }
    
    bool empty(){
        return s.size() == 0;
    }
};

int main() {
   Stack s;
   s.push(10);
   s.push(20);
   s.push(30);
   
   while(!s.empty()){
       cout<<s.top()<<endl;
       s.pop();
   }
   
   

    return 0;
}