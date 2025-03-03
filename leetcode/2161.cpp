class Solution {
    public:
        vector<int> pivotArray(vector<int>& arr, int pivot) {
            int n = arr.size();
            vector<int> greaterPivot;
            vector<int> equalPivot;
            vector<int> lessPivot;
            
            for(int i = 0; i < n; i++) {
                if(arr[i] < pivot) {  
                    lessPivot.push_back(arr[i]);  // ✅ Store smaller numbers
                } else if(arr[i] > pivot) {  
                    greaterPivot.push_back(arr[i]);  // ✅ Store greater numbers
                } else {
                    equalPivot.push_back(arr[i]);  
                }
            }
            
            // Append equalPivot and greaterPivot to lessPivot
            lessPivot.insert(lessPivot.end(), equalPivot.begin(), equalPivot.end());
            lessPivot.insert(lessPivot.end(), greaterPivot.begin(), greaterPivot.end());
            
            return lessPivot;
        }
    };

    
    class Solution {
        public:
            vector<int> pivotArray(vector<int>& arr, int pivot) {
                int n = arr.size();
                int countLess = 0;
                int countEqual = 0;
                for(int &num:arr){
                    if(num<pivot){
                        countLess++;
                    }else if(num == pivot){
                        countEqual++;
                    }
                }
        
                int i = 0; 
                int j =  countLess;
                int k = countEqual+countLess;
                vector<int>result(n);
                for(int &num:arr){
                    if(num<pivot){
                       result[i] = num;
                       i++;
                    }else if(num == pivot){
                        result[j] = num;
                        j++;
                    }else{
                        result[k] = num;
                        k++;
                    }
                }
                return result;
        
        
            }
        };