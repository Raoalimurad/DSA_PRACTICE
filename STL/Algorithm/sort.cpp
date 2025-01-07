#include <iostream>
#include<algorithm>
using namespace std;
int main() {
   int arr[] = {1,5,3,4,2};
   int n = 5;
   sort(arr,arr+n);
   
   for(int i = 0; i < n; i++){
       cout<<arr[i]<<" ";
   }
   ////sort in descending order

   // greater<int> is camparater which allow sorting in descending order
   sort(arr,arr+n,greater<int>())

    return 0;
}
