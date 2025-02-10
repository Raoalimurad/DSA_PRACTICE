///brute force approch
//time complexity is 0(n2)
#include <iostream>
#include<string>
using namespace std;
int main() {
 string s = "abc34d";
 int i = 0;
 while(i<s.length()){  ///0(n)
     if(isdigit(s[i])){
         s.erase(i,1);      ///0(n)
         if(i>=0){
             s.erase(i-1,1);
             i--;
         }
     }else{
         i++;
     }
 }
cout<<s;
    return 0;
}

//0(n ) time complexity but also 0(n) space complexity

#include <iostream>
#include<string>
using namespace std;
int main() {
 string s = "abc34d";
  string result = "";
  for(char ch:s){
      if(isdigit(ch)){
          if(!result.empty()){
              result.pop_back();  
          }
        
      }else{
          result.push_back(ch);
      }
  }
  cout<<result;
    return 0;
}