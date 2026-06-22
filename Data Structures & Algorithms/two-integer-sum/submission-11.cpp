class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indicies;

        for (int i = 0 ; i < nums.size(); i++) {
            indicies[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (indicies.count(complement) && indicies[complement] != i) {
                return {i, indicies[complement]};
            }
        }
    }
};
