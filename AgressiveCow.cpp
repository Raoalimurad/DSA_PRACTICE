
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isPossible(vector<int>&arr,int n,int C,int minPlaceAllowed){
    int cow = 1 ,lastCowPlace = arr[0];
    for(int i = 1; i<n;i++){
        if(arr[i]-lastCowPlace >= minPlaceAllowed){
            cow++;
            lastCowPlace = arr[i];
        }
        if(cow == C) return true;
    }
    return false;
}
int getDistance(vector<int> &arr,int n,int C){
    sort(arr.begin(),arr.end());
    int st = 1,end = arr[n-1]-arr[0] , ans = -1;
    while(st<=end){
        int mid = st +(end-st)/2;
        if(isPossible(arr,n,C,mid)){
            ans = mid;
            st = mid+1;
        }else{
            end = mid-1;
        }
    }
   return ans; 
}
int main() {
  int N = 5,C = 3;// c is cow and N = places jahn cow ko place karna hy
  vector<int> arr = {1,2,8,4,9};
  cout<<getDistance(arr,N,C);

    return 0;
}