class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int i = 0;
        int j = i + 1;

        if (nums.size() >= 2) {
            while (i <= nums.size() - 1) {
                while (j <= nums.size() - 1) {
                    if (nums[i] == nums[j]) {
                    return true;
                    }
                    else {
                        j++;
                    }
                }
                i++;
                j = i + 1;
            }
        }

        return false;
    }
};