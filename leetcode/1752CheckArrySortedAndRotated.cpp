#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {3, 4, 5, 1, 2};
    int n = arr.size();
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());

    for (int r = 0; r < n; r++) {
        bool isSorted = true;  // Declare bool variable

        for (int i = 0; i < n; i++) {
            if (sortedArr[i] != arr[(i + r) % n]) {
                isSorted = false;  // Fix placement
                break;
            }
        }

        if (isSorted) cout<<"yes";  // Correct return value
    }

    return 0; // Correct return value
}

//optimal
class Solution {
    public:
        bool check(vector<int>& arr) {
            int n  = arr.size();
            int peak = 0;
             for(int i = 0; i<n;i++){
                if(arr[i]>arr[(i+1)%n]){
                    peak++;
                }
             }
             if(peak >1) return false;
             return true;
        }
    };