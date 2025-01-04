
#include <iostream>
#include<map>
using namespace std;
int main() {
    /// two point key is unique and data is sorted in ascending
   map<string,int>m;
   m["Tv"] = 29;
   m["LCD"] = 49;
   m["Phone"] = 100;
   m.emplace("Ihone",20);
   m.insert({"Mouse",90});
   
//   remove value
m.erase("LCD");
   for(auto val : m){
       cout<<val.first<<" "<<val.second<<endl;
   }
   cout<<"count of Tv"<<m.count("Tv")<<endl;
   
   if(m.find("Phone") !=m.end()){
       cout<<"found"<<endl;
   }
    return 0;
}