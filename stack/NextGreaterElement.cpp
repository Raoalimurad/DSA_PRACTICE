
#include <iostream>
#include<stack>
#include<vector>
using namespace std;
int main() {
 vector<int> arr = {6,8,0,1,3};
  stack<int>st;
  vector<int> ans(arr.size(),0);
  for(int i = arr.size()-1;i>=0;i--){
      while(st.size()>0 && st.top()<=arr[i]){
          st.pop();
      }
      
      if(st.empty()){
          ans[i] = -1;
      }else{
          ans[i] = st.top();
      }
      st.push(arr[i]);
  }
 
for(int val : ans){
    cout<<val<<" ";
}
    return 0;
}


class Solution {
    public:
        vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
            stack<int> st;
            unordered_map<int,int>m;
            for(int i = nums2.size()-1; i>=0;i--){
                while(st.size()>0 && st.top()<=nums2[i]){
                    st.pop();
                }
                if(st.empty()){
                    m[nums2[i]] = -1;
                }else{
                    m[nums2[i]] = st.top();
                }
                st.push(nums2[i]);
            }
            vector<int>ans;
            for(int i = 0; i< nums1.size();i++){
              ans.push_back(m[nums1[i]]);
            }
            return ans;
        }
    };