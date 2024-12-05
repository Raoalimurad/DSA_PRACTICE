// // BRUTE APPROACH TO FIND MAJORITY ELEMENTS
// #include <iostream>
// #include<vector>

// using namespace std;
// int main() {
//     // Write C++ code here
//     vector<int> arr ={1,5,1,2,1};
//     int n = arr.size();
//     int majorityElement = -1;
//     for(int val : arr){
//         int frequency = 0;
//         for(int elem:arr){
//             if(val == elem){
//                 frequency++;
//             }
//         }
//         if(frequency > n/2){
//             majorityElement = val;
//         }
//     }
//       if (majorityElement != -1) {
//         cout << majorityElement;
//     } else {
//         cout << "No majority element found";
//     }

//     return 0;
// }


// // Optimize Approach
// #include <iostream>
// #include<vector>
// #include <algorithm>
// using namespace std;
// int main() {
//     // Write C++ code here
//    vector<int> nums = {2,5,2,4,2,4,4,4,4};
//    int n = nums.size();
//    sort(nums.begin(),nums.end());
//    int freq = 1, ans = nums[0];
//    for(int i = 0; i< n ;i++){
//        if(nums[i] == nums[i-1]){
//            freq++;
//        }else{
//            freq = 1;
//            ans = nums[i];
//        }
//        if(freq > n/2){
//        cout<<ans;
//        return 0;
//    }
//    }
 
   
//     return 0;
// }

// Moore's voting Algoritham 
#include <iostream>
#include<vector>
using namespace std;
int main() {
   vector<int> nums = {2,5,2,4,2,4,4,4,4};
   int n = nums.size();

   int freq = 0, ans =0;
   for(int i = 0; i< n ;i++){
        if(freq==0){
            ans = nums[i];
        }
        if(nums[i] == ans){
            freq++;
        }else{
            freq--;
        }
   }
   cout<< ans;
 
   
    return 0;
}





























