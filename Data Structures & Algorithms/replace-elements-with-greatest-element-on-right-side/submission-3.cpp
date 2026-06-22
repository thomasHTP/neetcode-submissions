class Solution {
   public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size() - 1;
        int maxRight = -1;
        vector<int> res(arr.size());
        for (int i = n; i >= 0; i--) {
            res[i] = maxRight;
            maxRight = max(arr[i], maxRight);
        }

        return res;
    }
};