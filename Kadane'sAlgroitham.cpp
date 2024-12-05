// find sub array
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1,2,3,4,5};
//     int size = 5;
//     for(int st = 0;st<size;st++){
//         for(int end=st;end<size;end++){
//             for(int i = st;i<=end;i++){
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// brute Approch to calcute sum of subArray
// #include <iostream>
// #include<climits>
// using namespace std;

// int main() {
//     int arr[] = {1,2,3,4,5};
//     int size = 5;
//     int maxSum = INT_MIN;
//     for(int st = 0; st < size ;st++){
//         int curSum = 0 ;
//         for(int end = st; end<size;end++){
//             curSum+=arr[end];
//             maxSum = max(curSum,maxSum);
//         }
//     }
//     cout<<"the maxsum of sub array is"<<maxSum;
//     return 0;
// }


// KADANE'S ALGORITHM
// #include <iostream>
// #include<climits>
// using namespace std;

// int main() {
//     int arr[] = {1,2,3,4,5};
//     int size = 5;
//     int maxSum = INT_MIN;
//     int curSum = 0;
//     for(int i = 0 ; i<size;i++){
//         curSum+=arr[i];
//         maxSum = max(maxSum,curSum);
//         if(curSum < 0){
//             curSum = 0;
//         }
//     }
//     cout<<"the maxsum of sub array using kadane's Algorithm is "<<maxSum;
    
//     return 0;
// }