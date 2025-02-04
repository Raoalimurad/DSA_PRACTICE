#include <iostream>
using namespace std;
int main() {
    int arr[] = {6,10,6};
    int n = 6;
    int ans = arr[0];  // Initialize with the first element
    int sum = arr[0];  // Stores the current ascending sum

    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[i - 1]) {
            sum += arr[i];  // Continue the ascending sequence
        } else {
            sum = arr[i];   // Reset for a new ascending sequence
        }
        ans = max(ans, sum);  // Update maximum sum
    }

    cout << ans;
    return 0;
}
