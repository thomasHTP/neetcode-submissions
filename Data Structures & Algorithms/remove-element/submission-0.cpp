class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> newNums(nums.size());
        int count = 0;
        for (int num : nums) {
            if (num != val) {
                nums[count] = num;
                count++;
            }
        }
        return count;
    }
};