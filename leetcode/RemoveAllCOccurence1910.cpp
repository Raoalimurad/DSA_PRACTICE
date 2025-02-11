
#include <iostream>
#include<string>
using namespace std;
int main() {
  
  string s = "daabcbaabcbc";
  string part = "abc";
  while(s.length()>0 && s.find(part)<s.length()){
      s.erase(s.find(part),part.length());
  }
  cout<<s;
  
  
    return 0;
}


//2nd method

#include <iostream>
#include<string>
using namespace std;
int main() {
  
  string s = "daabcbaabcbc";
  string part = "abc";
  while(s.find(part) !=string::npos){
      s.erase(s.find(part),part.length());
  }
  cout<<s;
  
    return 0;
}