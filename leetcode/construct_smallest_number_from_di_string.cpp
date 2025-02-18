/// brute force
class Solution {
    public:
       bool matchPermutation(string &result,string &pattern){
              for(int i = 0; i < pattern.length();i++){
                  if(pattern[i] == 'I' && result[i]>result[i+1] || pattern[i] == 'D' && result[i]<result[i+1]){
                    return false;
                  }
                 
              }
               return true;
       }
        string smallestNumber(string pattern) {
            int n = pattern.length();
             string result = "";
            for(int i = 1; i<=n+1;i++){
                result.push_back(i+'0');
            }
            while(!matchPermutation(result,pattern)){
                next_permutation(begin(result),end(result));
            }
            return result;
        }
    };


    class Solution {
        public:
            string smallestNumber(string pattern) {
                int n = pattern.length();
                string res = "";
                int count = 1;
                stack<char>st;
                for(int i = 0; i<=n;i++){
                    st.push(count+'0');
                    count++;
                    if(i==n || pattern[i] == 'I'){
                        while(!st.empty()){
                             res+=st.top();
                             st.pop();
                        }
                    }
                }
                return res;
            }
        };