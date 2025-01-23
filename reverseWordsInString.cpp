///revesrse string using two poitner apporach

#include <iostream>
#include<string>
using namespace std;
int main() {
   string s = "the pen";
   int st = 0 , end = s.length()-1;
 while(st<=end){
     swap(s[st],s[end]);
     st++;
     end--;
 }
 cout<<s;

    return 0;
}



#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {
   string s = "the pen";
   string ans = "";
    reverse(s.begin(),s.end());
  
  for(int i = 0 ; i< s.length();i++){
      string word = "";
      while(i< s.length() && s[i]!=' '){
          word+=s[i];
          i++;
      }
      reverse(word.begin(),word.end());
       if(word.length()>0){
           ans+=" "+word;
       }
  }
  cout<<ans.substr(1);

    return 0;
}