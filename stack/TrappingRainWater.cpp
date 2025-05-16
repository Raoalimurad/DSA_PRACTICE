class Solution {
    public:
        int trap(vector<int>& height) {
            int n  = height.size();
            vector<int> ml(n,0);
            vector<int> mr(n,0);
            
            ml[0] = height[0];
            mr[n-1] = height[n-1];
            //   max left
            for(int i = 1; i<n;i++){
                ml[i] = max(ml[i-1],height[i]);
            }
    
            for(int i = n-2; i>=0;i--){
                mr[i] = max(mr[i+1],height[i]);
            }
              int ans = 0;
            for(int i = 0; i< n;i++){
                ans+= min(mr[i],ml[i])- height[i];
            }
            return ans;
    
    
        }
    };

    ///two pointer appraoch
    class Solution {
        public:
            int trap(vector<int>& height) {
                int n = height.size();
                int l = 0 , r = n-1;
                int lmax = 0, rmax = 0;
                int ans =0;
                while(l<r){
                    lmax = max(lmax,height[l]);
                    rmax = max(rmax,height[r]);
                    if(lmax < rmax){
                        ans+=lmax - height[l];
                        l++;
                    }else{
                        ans+=rmax - height[r];
                        r--;
                    }
                }
                return ans;
            }
        };