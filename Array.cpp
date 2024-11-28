// Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// int main() {
//     // Write C++ code here
//    int size = 5;
//    int marks[size];
//     cout<<"enter the values";
//    for(int i = 0;i<size;i++){
//        cin>>marks[i];
//    }
//    for(int i = 0; i<size;i++){
//        cout<<marks[i]<<endl;
//    }

// find small values
// int small[6] = {2, 5, 6, 7, 8, 9};
//     int size = sizeof(small) / sizeof(int);
//     int smaller = small[0]; // Assume the first element is the smallest

//     for (int i = 0; i < size; i++) {
//         if (small[i] < smaller) {
//             smaller = small[i]; // Update smaller if a smaller value is found
//         }
//     }

//     cout << "Smallest number: " << smaller;

    

// also find index of it 

//     int small[6] = {56, 5, 6, 7, 8, 9};
//     int size = sizeof(small) / sizeof(int);
//     int smallest = small[0]; // Assume the first element is the smallest
//     int smallestIndex;

//   for(int i = 0; i< size;i++){
//       if(small[i] < smallest){
//           smallest = small[i];
//           smallestIndex = i;
//       }
//   }
//  cout<<"the smallest value "<<smallest<<endl;
//  cout<<"the index of it "<<smallestIndex;


//     return 0;
// }

// linear search
// linear search me hum start se end tak sequence ka sath check karty han

// #include <iostream>
// using namespace std;
// int linearSearch(int arr[],int sz,int target){
//     for(int i = 0; i < sz;i++){
//         if(arr[i] == target){
//             return i;
//         }
       
//     }
//      return -1;
// }
// int main() {
//     int arr[] = {1,2,3,4,5,6};
//     int size = 6;
//     int target =  5;
//     cout<<linearSearch(arr,size,target);
//     return 0;
// }

// reverse original arry
// two pointer appraoch

// void reverseArray(int arr[],int sz){
//     int start = 0, end = sz-1;
//     while(start < end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }

// int main() {
//     int arr[] = {1,2,3,4,5};
//     int size = 5;
//      reverseArray(arr,size);
//      for(int i = 0; i<size;i++){
//          cout<<arr[i];
//      }
    
//     return 0;
// }


