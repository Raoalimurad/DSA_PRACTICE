class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if (s1 == s2) return true; // Already equal, so return true
        
        vector<int> diff;

        // Find mismatched positions
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != s2[i]) {
                diff.push_back(i);
            }
        }

        // If there are not exactly two differences, return false
        if (diff.size() != 2) return false;

        // Swap the two differing characters in s2 and check if it matches s1
        swap(s2[diff[0]], s2[diff[1]]);
        return s1 == s2;
    }
};
