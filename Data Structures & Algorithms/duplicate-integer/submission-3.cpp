class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> freqTable;
        for (int i = 0; i < nums.size(); i++) {
            if (!freqTable.count(nums[i])) {
                freqTable[nums[i]]++;
            }
            else return true;
        }
        return false;
    }
};