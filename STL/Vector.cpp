// 1) vector
// Fixed vs Dynamic Size:

// Array: Fixed size hota hai, aur uska size compile time pe define hota hai.
// Vector: Dynamically grow kar sakta hai, toh size runtime pe badhaya ya kam kiya ja sakta hai.
// Memory Allocation:

// Jab vector ka size exceed karta hai, toh yeh internally memory ka size double kar deta hai (amortized growth).
// Purani memory ka data new memory block mein copy hota hai, aur purana block free kar diya jata hai.
// Advantages of Vector:

// Automatic resizing.
// Built-in functions (e.g., push_back(), pop_back(), size()).
// Iterators ke saath kaam karna easy hai.

#include <iostream>
#include<vector>
using namespace std;
int main() {
    // vector<int>vec = {1,2,3,4}
   vector<int> vec;
   vec.push_back(1);
   /// for check size
   cout<<vec.size()<<endl;

//   push back 
   vec.push_back(5);
   vec.push_back(51);
   vec.push_back(52);
    
    // check capacity of vector
    cout<<vec.capacity()<<endl;
    
    // pop back for delete
    vec.pop_back();
    
    for(int val:vec){
        cout<<val<<" ";
    }
    
    // access specific index at or [];
    cout<<vec.at(2)<<endl;
    
    
    // front and back for first and last element
    cout<<"first element"<<vec.front()<<"last element"<<vec.back();
    
     // for range and how put value in all space
    vector<int>vec(7,10);
    for(int val:vec){
        cout<<val<<" ";
    }


    
       vector<int>vec ={1,3,5,6,11};
//   erase fucntion time complecity is 0(n)
// it not tak index it take iterator of it 
    //  vec.erase(vec.begin());
    //   vec.erase(vec.begin()+2);
      
    //   delete specific range
    //  vec.erase(vec.begin()+1,vec.begin()+4);
    
    
    // insert function
    // vec.insert(vec.begin()+3,100);
    
    // clear fucntion
    // vec.clear();
    // cout<<vec.size();
    // cout<<vec.capacity();
    
    // empty function
    
     cout<<" is empty"<<vec.empty();
   for(int val:vec){
       cout<<val<<" ";
   }
     

//// iterators in vector
//1) begin,2)end

vector<int>vec = {1,2,3,4,5,6};
    cout<<&(*vec.begin())<<endl;
    cout<<(*vec.end());
    /// ya end value ka badd waly value ko point karta hy
    return 0;
    
}

vector<int> vec = {1,2,3,4,5};
   /// iterator
//   vector<int>::iterator it;
//     for(it = vec.begin(); it!=vec.end();it++){
//         cout<<*it<<" ";
//     }
    ///reverse iterator
    // vector<int>::reverse_iterator it;
    // for(it = vec.rbegin(); it !=vec.rend();it++){
    //     cout<<*it<<" ";
    // }
    /// or use auto work same it automatically understand
    
    for(auto it = vec.rbegin(); it != vec.rend();it++){
        cout<<*it<<" ";
    }