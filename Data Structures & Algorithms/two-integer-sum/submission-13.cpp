class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> nMap;
        for (int i = 0; i < nums.size(); i++) {
            if (!nMap.count(nums[i])) {
                nMap[nums[i]] = i;
            }
            int c = target - nums[i];
            if (nMap.count(c)) {
                if (nMap[c] != i) {
                    vector<int> ans;
                    if (i < nMap[c]) {
                        ans = {i, nMap[c]};
                    }
                    else ans = {nMap[c], i};
                    
                    return ans;
                }
            }
        }
    }
};
