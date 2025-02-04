
#include <iostream>
#include<climits>
using namespace std;
int main() {
   int arr[] = {-1,0,1,2,-1,-4};
   int n = 6;
   bool ans = false;
   for(int i = 0; i< n;i++){

       for(int j = i+1;j<n;j++){
           for(int k = j+1; k<n;k++){
               if(i!=j && j!=k  && i!=k){
                   if((arr[i]+arr[j]+arr[k])==0){
                       cout<<"yes";
                       ans = true;
                       cout<<arr[i]<<endl;
                        cout<<arr[j]<<endl;
                         cout<<arr[k]<<endl;
                         break;
                   }
               }
           }
           if(ans){
               break;
           }
       }
     if(ans){
         break;
     }
   }
 

    return 0;
}

//optomize 
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        int n = arr.size();
        
        vector<vector<int>>ans;
        for(int i =0 ; i< n;i++){
if(i>0 && arr[i]==arr[i-1])continue;
            sort(arr.begin(),arr.end());
            int j = i+1,k = n-1;
            while(j<k){
                int sum = arr[i]+arr[j]+arr[k];
                if(sum>0){
                    k--;
                }else if(sum<0){
                    j++;
                }else{
                    ans.push_back({arr[i],arr[j],arr[k]});
                    j++;k--;
                    while(j<k && arr[j] == arr[j-1]){
                        j++;
                    }
                }
            }
        }
        return ans;
    }