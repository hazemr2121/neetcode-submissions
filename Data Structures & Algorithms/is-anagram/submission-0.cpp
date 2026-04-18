class Solution {
public:
    bool isAnagram(string s, string t) {
        // If lengths are different, they can't be anagrams
        if (s.length() != t.length()) {
            return false;
        }
        
        // Sort both strings
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        // Compare sorted strings
        return s == t;

    }
};
