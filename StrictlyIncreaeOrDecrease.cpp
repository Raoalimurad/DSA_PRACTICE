

#include <iostream>
#include<climits>
using namespace std;
int main() {
   int arr[] = {1,4,3,3,2};
   int strictlyIncrease = 1;
   it strictlyDecrease = 1;
   int longest = 1;
   int n = 5;
   for(int i = 1; i<n;i++){
       if(arr[i]>arr[i-1]){
           strictlyIncrease++; 
       }else{
           strictlyIncrease = 1 
       }
       
       if(arr[i]<arr[i-1]){
           strictlyDecrease++;
       }else{
           strictlyDecrease = 1
       }
       longest = max({longest, strictlyIncrease ,strictlyDecrease})
   }

    return 0;
}