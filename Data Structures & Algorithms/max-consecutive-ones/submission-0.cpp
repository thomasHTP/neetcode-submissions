class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxStreak = 0;
        int streak = 0;
        for (int num : nums) {
            if (num == 1) {
                streak++;
            }
            else streak = 0;

            maxStreak = max(streak, maxStreak);
        }

        return maxStreak;
    }
};