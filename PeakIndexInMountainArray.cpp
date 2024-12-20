#include <iostream>
using namespace std;
int main() {
    int arr[] = {0,3,8,9,5,2};
   int n = 6;
   int peak = -1;
   for(int i = 0; i<n-1;i++){
       if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
           peak = i;
           break;
       }
   }

cout<<peak;
    return 0;
}


#include <iostream>
using namespace std;
int main() {
    int arr[] = {0,3,8,9,5,2};
    int n = 6;
    int st = 1;
    int end = n-2;
 while(st<=end){
     int mid = st +(end-st)/2;
     if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
         cout<<arr[mid];
     }
     if(arr[mid-1]<arr[mid]){
         st = mid+1;
     }else{
         end = mid-1;
     }
 }
    return 0;
}