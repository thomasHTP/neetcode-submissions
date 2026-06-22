class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int n : nums) {
            if (freq.count(n)) {
                freq[n]++;
            } else {
                freq[n] = 1;
            }
        }
        vector<int> results;
        while (k > 0) {
            int mostFreq = -1;
            int mostFreqNum = -1;
            for (int n : nums) {
                if (freq[n] > mostFreq &&
                    find(results.begin(), results.end(), n) == results.end()) {
                    mostFreq = freq[n];
                    mostFreqNum = n;
                }
            }
            results.push_back(mostFreqNum);
            k--;
        }
        return results;
    }
};