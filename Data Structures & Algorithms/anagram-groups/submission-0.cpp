class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> sortedMap;
        for (string word : strs) {
            string sortedString = word;
            sort(sortedString.begin(), sortedString.end());
            sortedMap[sortedString].push_back(word);
        }

        vector<vector<string>> result;

        for (auto [key, value] : sortedMap) {
            result.push_back(value);
        }

        return result;
    }
};
