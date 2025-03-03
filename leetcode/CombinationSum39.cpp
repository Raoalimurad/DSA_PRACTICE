class Solution {
    public:
        set<vector<int>> s;
       void allCombination(vector<int>& arr,int i,  vector<int>& comb,   vector<vector<int>>& ans,int target){
            if(i ==arr.size() || target < 0){
                return;
            }
            if(target == 0){
                if(s.find(comb) == s.end()){
    ans.push_back(comb);
    s.insert(comb);
                }
                
                return;
            }
             comb.push_back(arr[i]);
             allCombination(arr,i+1,comb,ans,target-arr[i]);
             allCombination(arr,i,comb,ans,target-arr[i]);
             comb.pop_back();
              allCombination(arr,i+1,comb,ans,target);
       }
    
        vector<vector<int>> combinationSum(vector<int>& arr, int target) {
            vector<vector<int>> ans;
            vector<int>comb;
            allCombination(arr,0,comb,ans,target);
            return ans;
        }
    };