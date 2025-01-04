
#include <iostream>
#include<stack>
using namespace std;
int main() {
   stack<int> s;
   s.push(2);
   s.push(3);
   s.push(4);
   while(!s.empty()){
       cout<<s.top()<<" ";
       s.pop();
   }
     ///swap
  stack<int>s1;
  s1.swap(s);
  cout<<"size of s1 is "<<s1.size()<<endl;
  cout<<"size of s is "<<s.size()<<endl;
    return 0;
}