#include <iostream>
#include <vector> // Include vector library
using namespace std;

int main() {
    int num[] = {1, 2, 3, 4};
    int size = 4;
    int totalProduct = 1;
    vector<int> finalArray; // Use vector instead of array

    // Calculate the product of all elements
    for (int i = 0; i < size; i++) {
        totalProduct *= num[i];
    }

    // Populate the final array
    for (int i = 0; i < size; i++) {
        finalArray.push_back(totalProduct / num[i]); // Calculate each value
    }

    // Output the final array
    for (int i = 0; i < size; i++) {
        cout << finalArray[i] << " ";
    }

    return 0;
}


#include <iostream>
#include <vector> // Include vector library
using namespace std;

int main() {
    int num[] = {1, 2, 3, 4};
    int size = 4;
    vector<int> finalArray(size, 1); 
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i != j) {
                finalArray[i] *= num[j];
            }
        }
    }

   
    for (int i = 0; i < size; i++) {
        cout << finalArray[i] << " ";
    }

    return 0;
}








#include <iostream>
#include <vector> // Include vector library
using namespace std;

int main() {
    int num[] = {1, 2, 3, 4};
    int size = 4;
    vector<int> finalArray(size, 1); 

    // Prefix product calculation
    for (int i = 1; i < size; i++) {
        finalArray[i] = finalArray[i-1] * num[i-1];
    }

    int suffix = 1;

    // Suffix product calculation and final adjustment
    for (int i = size-1; i >= 0; i--) {
        finalArray[i] *= suffix;
        suffix *= num[i];
    }

    // Print the final result
    for (int i : finalArray) {
        cout << i << " ";
    }

    return 0;
}
