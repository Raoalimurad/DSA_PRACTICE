#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
   int arr[] = {1,5,3,4,2};
  vector<int> vec = {6,5,4,3,1};
   int n = 5;
   reverse(arr,arr+n);
//   reverse(vec.begin();vec.end());
   //if you want to reverse specific value
   reverse(vec.begin()+1,vec.begin()+3);
   
   for(int i = 0; i < n; i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl;
    for(int i = 0; i < n; i++){
       cout<<vec[i]<<" ";
   }
   

    return 0;
}