class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        unordered_map<int, vector<int>> m(arr.size());
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = -1;
            vector<int> temp = arr;
            sort(temp.begin(), temp.end());
            m[i] = temp;
        }

        vector<int> res(arr.size());

        for (int i = 0; i < arr.size(); i++) {
            if (m[i].size() - 1 > 0) {
                int bigIndex = m[i].size() - 1;
                vector<int> currArr = m[i];
                res[i] = currArr[bigIndex];
            }
            else res[i] = -1;
        }

        return res;
    }
};