#include <stack>
#include <unordered_map>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> stack;
        std::unordered_map<char, char> bracket_mapping = {{')', '('}, {']', '['}, {'}', '{'}};

        for (char ch : s) {
            if (bracket_mapping.find(ch) != bracket_mapping.end()) {
                if (stack.empty() || stack.top() != bracket_mapping[ch]) {
                    return false;
                }
                stack.pop();
            } else {
                stack.push(ch);
            }
        }

        return stack.empty();
    }
};

