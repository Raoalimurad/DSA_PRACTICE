//time complexity is 0(logn)
//beacuse in every step we divide array n ?> n/2 /> n/4 in the end 1
//space complexity is 0(logn)

#include <iostream>
#include<vector>
using namespace std;
int biSearch(vector<int> arr,int tar,int st,int end){
    if(st<=end){
        int mid =st+(end-st)/2;
        if(arr[mid] == tar){
            return mid;
        }else if(tar>arr[mid]){
            return biSearch(arr,tar,mid+1,end);
        }else{
          return biSearch(arr,tar,st,mid-1);  
        }
       
    }
     return -1;
}
int main() {
   vector<int> arr = {1,3,4,5,6,8,9};
   int target = 6;
   int st = 0,end = arr.size()-1;
   cout<<biSearch(arr,target,st,end);

    return 0;
}