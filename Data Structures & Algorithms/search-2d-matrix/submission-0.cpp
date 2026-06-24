class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0;
        int r = matrix[0].size() - 1;
        int m = 0;

        for (int i = 0; i < matrix.size(); i++) {
            vector<int> curr = matrix[i];
            if (curr[curr.size() - 1] >= target && curr[0] <= target) {
                m = i;
                break;
            }
        }

        while (l <= r) {
            vector<int> curr = matrix[m];
            int mid = l + (r - l) / 2;
            if (curr[mid] > target) {
                r = mid - 1;
            }
            else if (curr[mid] < target) {
                l = mid + 1;
            }
            else {
                return true;
            }
        }

        return false;
    }
};
