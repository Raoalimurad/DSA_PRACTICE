
//time complexity is 0(n)
///space complexity is 0(n)

#include <iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int>arr,int n){
    if(n == 0 || n== 1) return true;
    if(arr[n-1]>=arr[n-2] && isSorted(arr,n-1)){
        return true;
    }else{
        return false;
    }
}
int main() {
  vector<int> arr = {1,3,4,5,6};
  int n = arr.size();
  cout<<isSorted(arr,n);
    return 0;
}