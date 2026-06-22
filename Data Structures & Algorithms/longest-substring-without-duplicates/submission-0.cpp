class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        unordered_map<char, int> sMap;
        int longest = 0;
        int currLen = 0;

        for (int r = 0; r < s.length(); r++) {
            if (sMap.count(s[r])) {
                sMap[s[r]] += 1;
                currLen++;
                if (sMap[s[r]] > 1) {
                    while (sMap[s[r]] > 1) {
                        sMap[s[l]]--;
                        l++;
                        currLen--;
                    }
                }
                longest = max(currLen, longest);
            }
            else {
                sMap[s[r]] = 1;
                currLen++;
                longest = max(currLen, longest);
            }
        }

        return longest;
    }
};
