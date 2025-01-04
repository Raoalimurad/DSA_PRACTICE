
#include <iostream>
#include<list>
using namespace std;
int main() {
    // list <int> l ={1,2,3,4}
   list <int> l;
   // instering value from front as well as end
   l.push_back(5);
    l.push_back(6);
    l.push_front(2);
     l.push_front(1);
     
    //  delete value
    l.pop_back();
    l.pop_front();
     
     for(int val:l){
         cout<<val<<" ";
     }
    

    return 0;
}