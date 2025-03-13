class Solution {
    public:
           int n;
           int Q;
      bool differnceArry(vector<int> &nums,vector<vector<int>>& queries,int k){
            vector<int> diff(n,0);
            
            for(int i = 0; i<=k;i++){
                int L = queries[i][0];
                int R = queries[i][1];
                int x = queries[i][2];
                diff[L] += x;
                if(R+1 <n){
                     diff[R+1] -= x;
                }
               
            }
             int curSum = 0;
            for(int i = 0; i<n;i++ ){
                curSum += diff[i];
                diff[i] = curSum;
                if(nums[i] - diff[i] >0){
                    return false;
                }
            }
            return true;
    
      }
        int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
            n = nums.size();
             Q  = queries.size();
            ///check zero all
             auto lambda = [](int x){
                return x == 0;
             };
    
             if(all_of(begin(nums),end(nums),lambda)){
                return 0;
             }
    
            for(int i = 0; i<Q; i++){
                if(differnceArry(nums,queries,i) == true){
                     return i+1;
                }
            }
            return -1;
        }
    };








    class Solution {
        public:
               int n;
               int Q;
          bool differnceArry(vector<int> &nums,vector<vector<int>>& queries,int k){
                vector<int> diff(n,0);
                
                for(int i = 0; i<=k;i++){
                    int L = queries[i][0];
                    int R = queries[i][1];
                    int x = queries[i][2];
                    diff[L] += x;
                    if(R+1 <n){
                         diff[R+1] -= x;
                    }
                   
                }
                 int curSum = 0;
                for(int i = 0; i<n;i++ ){
                    curSum += diff[i];
                    diff[i] = curSum;
                    if(nums[i] - diff[i] >0){
                        return false;
                    }
                }
                return true;
        
          }
            int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
                n = nums.size();
                 Q  = queries.size();
                ///check zero all
                 auto lambda = [](int x){
                    return x == 0;
                 };
        
                 if(all_of(begin(nums),end(nums),lambda)){
                    return 0;
                 }
        
                int result = 0;
                int st = 0; 
                int end = Q-1;
                int k = -1;
                while(st<=end){
                    int mid = st+(end-st)/2;
                    if(differnceArry(nums,queries,mid) == true){
                         k = mid+1;
                         end = mid-1;
                    }else{
                        st = mid+1;
                    }
                }
                return k;
            }
        };