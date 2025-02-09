#include <iostream>
#include <utility>
using namespace std;

pair<int, int> searchSumPair(int arr[], int target, int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(target == (arr[i] + arr[j])) {
                return make_pair(i, j);  // Added missing semicolon
            }
        }
    }
    return make_pair(-1, -1);  // Fixed typo
}

int main() {
    int arr[] = {5, 11, 15, 2, 7};
    int target = 9;
    int n = sizeof(arr) / sizeof(int);
    
    pair<int, int> result = searchSumPair(arr, target, n);  

    if (result.first != -1) {
        cout << "Indices: " << result.first << ", " << result.second << endl;
    } else {
        cout << "No pair found" << endl;
    }

    return 0;
}


//  two pointer approch
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    // 0(nlogn)+0(n) //but nlogn is greater that's why this is time complexity
    int arr[] = {5, 11, 15, 2, 7};
    int target = 9;
    int n = sizeof(arr) / sizeof(int);
    int st = 0,end = n-1;
      sort(arr,arr+n); /// 0(nlogn) /// this is total time complexity
   
    while(st<=end){///0(n)
       if(target==(arr[st]+arr[end])){
           cout<<arr[st]+arr[end];
           break;
       }else if(target<(arr[st]+arr[end])){
           end--;
       }else{
           st++;
       }
     
    }

    return 0;
}


///0(n)
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> arr = {5, 11, 15, 2, 7};
    int target = 9;
    unordered_map<int, int> m;
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++) {
        int first = arr[i];
        int second = target - first;
        
        if (m.find(second) != m.end()) {
            ans.push_back(i);
            ans.push_back(m[second]); // Fixed variable name
            break;
        }
        m[first] = i;
    }

    for (int i : ans) cout << i << " "; // Output the result
    return 0;
}

