
#include <iostream>
#include<set>
using namespace std;
int main() {
    ////it insert unique value it does not take duplicate value
//   set<int> s;
//   s.insert(1);
//      s.insert(2);
//     //   s.insert(3);
//          s.insert(4);
         
         
         
//         /// lower bound // if two not found it return upper value of just after it if value does not exist so return end() value
//         cout<<*(s.lower_bound(3));
        
//         ///
//         // upper_bound() 
        
//           cout<<*(s.upper_bound(2))<<endl;

// multi set it take also duplicate and arrange in ascending order

   multiset<int>s;
   s.insert(1);
     s.insert(2);
       s.insert(3);
         s.insert(4);
         
          s.insert(2);
       s.insert(3);
         s.insert(4);
         
         ////unordered set its arrange value in random and upper and lower bond concpet deos not exist for it
 for(auto val:s){
     cout<<val<<" ";
 }
         

    return 0;
}