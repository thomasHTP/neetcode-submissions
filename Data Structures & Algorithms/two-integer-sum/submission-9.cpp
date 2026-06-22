class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answers(2, -1);

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    if (i < j) {
                        answers[0] = i;
                        answers[1] = j;
                    }
                    else {
                        answers[0] = j;
                        answers[1] = i;
                    }
                }
            }
        }

        return answers;
    }
};
