
#include <iostream>
#include<deque>
using namespace std;
int main() {
  deque <int> d = {1,2,3,4};
  for(int val:d){
      cout<<val <<" ";
  }
    //// here all operation can perform
    //push-back push_front ,pop as well as and many

   /// you can access random access in deque
   cout<<d[2]<<endl;
    return 0;
}

//pair

#include <iostream>
#include<deque>
using namespace std;
int main() {
pair<int,int> p = {1,1};
cout<<p.first;
cout<<p.second<<endl;

pair<int,char> p1 = {2,'c'};
cout<<p1.first;
cout<<p1.second<<endl;

pair<int,pair<char,bool>> p2 = {2,{'a',true}};
cout<<p2.first<<endl;
cout<<p2.second.first;
cout<<p2.second.second<<"acha";
    return 0;
}