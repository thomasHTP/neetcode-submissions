class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        vector<vector<int>> freqList(nums.size() + 1);

        for (int n : nums) {
            freq[n]++;
        }

        for (auto mapping : freq) {
            freqList[mapping.second].push_back(mapping.first);
        }

        vector<int> results;

        for (int i = freqList.size() - 1; i > 0 && k > 0; i--) {
            if (!freqList[i].empty()) {
                for (int num : freqList[i]) {
                    results.push_back(num);
                    k--;
                }
                
            }
        }

        return results;
    }
};