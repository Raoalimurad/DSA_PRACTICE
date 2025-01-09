#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
   
  vector<int> vec = {6,5,4,3,1};
  next_permutation(vec.begin(),vec.end());
  
  ///using string
  string s = "abc";
    next_permutation(s.begin(),s.end());
    cout<<s;
  
   //// now previos permutaion
    prev_permutation(s.begin(),s.end());
     cout<<s;

    return 0;
}
