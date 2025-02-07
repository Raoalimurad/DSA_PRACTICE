
#include <iostream>
#include<vector>
#include <algorithm> 
using namespace std;
int main() {
   vector<int> arr = {1,0,-1,0,-2,2};
   vector<vector<int>>ans;
   int target = 0;
   int n = arr.size();
   sort(arr.begin(),arr.end());
   for(int i = 0; i<n;i++){
      if(i>0 && arr[i] == arr[i-1]) continue;
       for(int j = i+1; j<n;){
           int p = j+1,q = n-1;
           while(p<q){
               long  sum =(long long) arr[i]+arr[j]+arr[p]+arr[q];
               if(sum>target){
                   q--;
               }else if(sum < target){
                   p++;
               }else{
                   ans.push_back({arr[i],arr[j],arr[p]});
                   p++;q--;
                   while(p<q && arr[p]==arr[p-1]){
                       p++;
                   }
               }
           }
           j++;
           while(j<n && arr[j] == arr[j-1]){
               j++;
           }
       }
   }
   
   

    return 0;
}