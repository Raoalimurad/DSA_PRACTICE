#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums(5, 0);
    int n = nums.size();
    vector<vector<int>> queries = {{1, 3, 2}, {2, 4, 3}, {0, 2, -2}};
 
     for( auto query:queries){
         int start = query[0];   
         int end = query[1];
         int x = query[2];
         nums[start] +=x;
         if(end+1<n){
             nums[end] -= x;
         }
     }
     //comulative sum lia hy
    for(int i = 1; i < nums.size(); i++) {
    nums[i] += nums[i-1];  // nums[i] = nums[i] + nums[i-1]
}

     for(int num:nums){
         cout<<num<<" ";
     }

    return 0;
}






