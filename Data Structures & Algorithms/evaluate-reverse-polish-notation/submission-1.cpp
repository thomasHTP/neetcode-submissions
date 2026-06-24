class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> tStack;

        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+") {
                int second = tStack.top();
                tStack.pop();
                int first = tStack.top();
                tStack.pop();

                int res = first + second;
                tStack.push(res);
            }
            else if (tokens[i] == "-") {
                int second = tStack.top();
                tStack.pop();
                int first = tStack.top();
                tStack.pop();

                int res = first - second;
                tStack.push(res);
            }
            else if (tokens[i] == "*") {
                int second = tStack.top();
                tStack.pop();
                int first = tStack.top();
                tStack.pop();

                int res = first * second;
                tStack.push(res);
            }
            else if (tokens[i] == "/") {
                int second = tStack.top();
                tStack.pop();
                int first = tStack.top();
                tStack.pop();

                int res = first / second;
                tStack.push(res);
            }
            else {
                tStack.push(stoi(tokens[i]));
            }
        }

        return tStack.top();
    }
};
