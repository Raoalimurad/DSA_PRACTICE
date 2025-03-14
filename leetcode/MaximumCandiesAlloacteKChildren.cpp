class Solution {
    public:
     bool candDistribute(vector<int> &cand,int mid,long long k){
            
            int n = cand.size();
            for(int i = 0; i<n;i++){
                k-=cand[i]/mid;
                if(k <=0){
                return true;
            }
            }
            
            return k<=0;
     }
        int maximumCandies(vector<int>& cand, long long k) {
            
            int n = cand.size();
            int mCan = 0;
            long long totalC = 0;
            for(int i = 0; i<n;i++){
                 totalC += cand[i];
                mCan = max(cand[i],mCan);
               
            }
            if(totalC < k){
                return 0;
            }
            int st = 1;
            int end = mCan;
            int result = 0;
            while(st<=end){
                int mid = st+(end-st)/2;
                if(candDistribute(cand,mid,k)){
                   result = mid;
                   st  = mid+1;
                }else{
                    end = mid-1;
                }
            }
            return result;
        }
    };