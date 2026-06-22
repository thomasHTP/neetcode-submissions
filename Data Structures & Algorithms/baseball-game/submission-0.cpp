class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> scoreStack;
        for (string s : operations) {
            if (s == "+") {
                int first = scoreStack.top();
                scoreStack.pop();
                int second = scoreStack.top();
                scoreStack.push(first);
                scoreStack.push(first + second);
            }
            else if (s == "C") {
                scoreStack.pop();
            }
            else if (s == "D") {
                scoreStack.push(scoreStack.top()*2);
            }
            else {
                scoreStack.push(stoi(s));
            }
        }
        int score = 0;
        while (!scoreStack.empty()) {
            score = scoreStack.top() + score;
            scoreStack.pop();
        }
        return score;
    }
};