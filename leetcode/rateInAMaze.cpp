#include <iostream>
#include <vector>
using namespace std;

void helper(vector<vector<int>> &mat, int r, int c, string path, vector<string> &ans) {
    int n = mat.size();
    
    if (r < 0 || c < 0 || r >= n || c >= n || mat[r][c] == 0 || mat[r][c] == -1) {
        return;
    }
    
    if (r == n - 1 && c == n - 1) {
        ans.push_back(path);
        return;
    }
    
    mat[r][c] = -1;  // Mark as visited
    
    // Down move
       helper(mat, r + 1, c, path + 'D', ans);
     helper(mat, r, c - 1, path + 'L', ans);
 
    // Up move
    helper(mat, r - 1, c, path + 'U', ans);
    // Right move
    helper(mat, r, c + 1, path + 'R', ans);
    // Left move (fixed)
   
    
    mat[r][c] = 1;  // Unmark to allow backtracking
}

vector<string> findPath(vector<vector<int>> &mat) {
    string path = "";
    vector<string> ans;
    
    if (mat[0][0] == 1) {
        helper(mat, 0, 0, path, ans);
    }
    
    return ans;
}

int main() {
    vector<vector<int>> mat = {{1, 0, 0, 0},
                               {1, 1, 0, 1},
                               {1, 1, 0, 0},
                               {0, 1, 1, 1}};
    
    vector<string> result = findPath(mat);
    
    for (const string &path : result) {
        cout << path << endl;
    }
    
    return 0;
}
