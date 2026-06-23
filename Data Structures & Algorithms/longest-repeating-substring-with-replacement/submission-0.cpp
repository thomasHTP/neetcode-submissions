class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> cMap;
        int l = 0;
        int res = 0;

        for (int r = 0; r < s.length(); r++) {
            cMap[s[r]] += 1;
            int maxC = 0;
            for (auto c : cMap) {
                maxC = max(c.second, maxC);
            }
            
            if (((r - l + 1) - maxC) <= k) {
                res = max((r - l + 1), res);
            }
            else {
                cMap[s[l]]--;
                l++;
            }
        }

        return res;
    }
};
