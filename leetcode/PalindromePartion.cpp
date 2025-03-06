class Solution {
    public:
    bool isPalindrome(string s){
        string s1 = s;
        reverse(s1.begin(),s1.end());
        return s1==s;
    }
     void getAllPartition(string s,vector<string> &partition, vector<vector<string>> &ans){
             if(s.length() ==0){
                ans.push_back(partition);
                return;
             }
        for(int i = 0; i<s.length();i++){
            string part = s.substr(0,i+1);
            if(isPalindrome(part)){
                partition.push_back(part);
                getAllPartition(s.substr(i+1),partition,ans);
                partition.pop_back();
            }
        }
     }
        vector<vector<string>> partition(string s) {
           vector<string>partition;
           vector<vector<string>> ans;
           getAllPartition(s,partition,ans);
           return ans;
        }
    };