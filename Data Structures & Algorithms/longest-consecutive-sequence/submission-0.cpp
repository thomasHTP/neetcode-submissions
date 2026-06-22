class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());

        int longest = 0;

        for (int num : numSet) {
            if (numSet.find(num - 1) == numSet.end()) {
                int current = 1;
                while (numSet.find(num + current) != numSet.end()) {
                    current++;
                }
                longest = max(longest, current);
            }
        }

        return longest;
    }
};
