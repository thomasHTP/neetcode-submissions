class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> parentheses;
        parentheses.insert({'}', '{'});
        parentheses.insert({']', '['});
        parentheses.insert({')', '('});

        stack<char> pStack;

        for (char c : s) {
            if (!parentheses.count(c)) {
                pStack.push(c);
            }
            else {
                if (!pStack.empty()) {
                    if (pStack.top() == parentheses[c]) {
                        pStack.pop();
                    }
                    else return false;
                }
                else return false;
            }
        }

        return pStack.empty();
        
    }
};
