class Solution {
    public:
        void getAllSubset(vector<int>& arr,vector<int>& ans,int i,vector<vector<int>>& allSubset){
              if(i == arr.size()){
                 allSubset.push_back({ans});
                 return;
              }
              ans.push_back(arr[i]);
              getAllSubset(arr,ans,i+1,allSubset);
              ans.pop_back();
              getAllSubset(arr,ans,i+1,allSubset);
        }
        vector<vector<int>> subsets(vector<int>& arr) {
            vector<vector<int>> allSubset;
            vector<int> ans;
            getAllSubset(arr,ans,0,allSubset);
            return allSubset;
        }
    };