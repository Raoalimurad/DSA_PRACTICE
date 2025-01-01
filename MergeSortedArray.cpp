#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> m = {1, 2, 3, 0, 0, 0}; // Assuming 'm' has space for merged array
    vector<int> n = {2, 5, 6};
    vector<int> mn; // Resultant merged array

    int i = 0, j = 0;

    // Merge until one array is exhausted
    while (i < 3 && j < n.size()) { // '3' is the actual count of non-zero elements in 'm'
        if (m[i] <= n[j]) {
            mn.push_back(m[i]);
            i++;
        } else {
            mn.push_back(n[j]);
            j++;
        }
    }

    // Add remaining elements of 'm'
    while (i < 3) {
        mn.push_back(m[i]);
        i++;
    }

    // Add remaining elements of 'n'
    while (j < n.size()) {
        mn.push_back(n[j]);
        j++;
    }

    // Print the merged array
    for (int x : mn) {
        cout << x << " ";
    }

    return 0;
}
