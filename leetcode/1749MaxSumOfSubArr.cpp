class Solution {
    public:
        int maxAbsoluteSum(vector<int>& arr) {
            int maxSum = 0, minSum = 0, curMax = 0, curMin = 0;
    
            for (int num : arr) {
                curMax += num;
                curMin += num;
                
                maxSum = max(maxSum, curMax);
                minSum = min(minSum, curMin);
                
                if (curMax < 0) curMax = 0;
                if (curMin > 0) curMin = 0;
            }
    
            return max(maxSum, abs(minSum));
        }
    };