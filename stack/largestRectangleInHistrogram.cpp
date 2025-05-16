class Solution {
    public:
        int largestRectangleArea(vector<int>& h) {
            int n = h.size();
            vector<int> left(n,0); /////left nearest samller
            vector<int> right(n,0); //// right nearest smaller
            stack<int> st;
            for(int i = n-1; i>=0;i--){
                while(st.size() > 0 && h[st.top()]>=h[i]){
                    st.pop();
                }
                if(st.empty()){
                     right[i] =  n;
                }else{
                    right[i] = st.top();
                }
                st.push(i);
            }
             st = stack<int>();
            ////left smaller
            for(int i = 0; i<n;i++){
                while(st.size() > 0 && h[st.top()]>=h[i]){
                    st.pop();
                }
                if(st.empty()){
                     left[i] =  -1;
                }else{
                    left[i] = st.top();
                }
                st.push(i);
            }
    
            int ans =0;
            for(int i =0; i<n;i++){
                int widht = right[i] -left[i] -1;
                int currArea = h[i] * widht;
                ans = max(ans,currArea);
            }
            return ans;
    
        }
    };