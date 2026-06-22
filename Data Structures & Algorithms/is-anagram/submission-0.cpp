class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        vector<int> alpha(26, 0);

        for (char c : s) {
            alpha[c - 'a']++;
        }
        for (char c : t) {
            alpha[c - 'a']--;
        }

        for (int x : alpha) {
            if (x != 0) {
                return false;
            }
        }

        return true;

    }
};
