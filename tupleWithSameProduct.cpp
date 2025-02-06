
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int nC2(int n){
        return (n * (n - 1)) / 2;
    }
int main() {
     vector<int>nums = {2,3,4,6};
    unordered_map<int,int>freq;
    int n = nums.size(),count = 0;
    for(int i = 0; i<n-1;i++){
        for(int j = i+1;j<n;j++){
            int product = nums[i]*nums[j];
            freq[product]++;
        }
    }
    for(auto [key,value]:freq){
        count+=8*nC2(value);
    }
    cout<<count<<endl;
    return 0;
}