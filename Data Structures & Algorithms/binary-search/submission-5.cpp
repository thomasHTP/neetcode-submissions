class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;

        while (l <= r) {
            int num = l + (r - l) / 2;
            if (nums[num] == target) {
                return num;
            }
            else if (nums[num] > target) {
                r = num - 1;
            }
            else if (nums[num] < target) {
                l = num + 1;
            }
        }

        return -1;
    }
};
