class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;
        int maxArea = 0;

        while (l < r) {
            maxArea = max(((r - l) * min(heights[l], heights[r])), maxArea);

            if (heights[l] > heights[r]) {
                r--;
            }
            else {
                l++;
            }
        }

        return maxArea;
    }
};
