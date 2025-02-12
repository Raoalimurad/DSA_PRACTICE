////////brute forc approch
#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
int digitSum(int n){
    int sum = 0;
    while(n>0){
        int digit = n%10;
        sum+=digit;
        n/=10;
    }
    return sum;
}
int main() {
    vector<int> arr = {18, 43, 36, 13, 7};
       int n = arr.size();
       int result = -1;
       for(int i = 0 ; i <n ; i++){
           int sumDigitI = digitSum(arr[i]);
           for(int j = i+1; j<n;j++){
               int sumDigitJ = digitSum(arr[j]);
               if(sumDigitI == sumDigitJ ){
                   result = max(result,arr[i]+arr[j]);
               }
           }
       }
       cout<<result;
   
    return 0;
}





#include <iostream>
#include<algorithm>
#include<unordered_map>
#include <vector>
using namespace std;
int digitSum(int n){
    int sum = 0;
    while(n>0){
        int digit = n%10;
        sum+=digit;
        n/=10;
    }
    return sum;
}
int main() {
    vector<int> arr = {18, 43, 36, 13, 7};
    unordered_map<int,int>ans;
       int n = arr.size();
       int result = -1;
       for(int i = 0; i< n;i++){
           int Dsum = digitSum(arr[i]);
           if(ans.count(Dsum)){
               result = max(result,arr[i]+ans[Dsum]);
           }
           ans[Dsum] = max(ans[Dsum],arr[i]);
       }
       cout<<result;
   
    return 0;
}



