class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> compare;
        for (char c : s1) {
            compare[c] += 1;
        }

        unordered_map<char, int> current;
        int l = 0;
        int count = 0;

        for (int r = 0; r < s2.length(); r++) {
            if (compare.count(s2[r])) {
                current[s2[r]] += 1;
                count++;
                if (current[s2[r]] > compare[s2[r]]) {
                    while (current[s2[r]] > compare[s2[r]]) {
                        current[s2[l]]--;
                        l++;
                        count--;
                    }
                }
                if (count == s1.length()) {
                    return true;
                }
            } else {
                current.clear();
                count = 0;
                l = r + 1;
            }
        }

        return false;
    }
};
