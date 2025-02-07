#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int limit = 4;
    vector<vector<int>> queries = {{1, 4}, {2, 5}, {1, 3}, {3, 4}};
    int n = queries.size();
    
    vector<int> result(n);  // Resize result to store values
     // Ball array initialized to -1
    unordered_map<int, int> colormp;
    unordered_map<int, int> ballmp;
    
    for (int i = 0; i < n; i++) {
        int ball = queries[i][0];
        int color = queries[i][1];
        
        // If the ball was already assigned a color, decrement its count
        if (ballmp.count(ball)) {
            int prevColor = ballmp[ball];
            colormp[prevColor]--;
            if (colormp[prevColor] == 0) {
                colormp.erase(prevColor);
            }
        }

        // Assign new color to the ball
        ballmp[ball] = color;
        colormp[color]++;  // Corrected `colormap` -> `colormp`
        
        result[i] = colormp.size(); // Store the count of unique colors
    }

    // Print the result array (optional, for debugging)
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
