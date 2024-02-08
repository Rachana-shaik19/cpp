#include <iostream>
#include <stack>
#include <unordered_map>

class Solution {
public:
    bool isValid(std::string s)
    {
        std::stack<char> bracketStack;
        std::unordered_map<char, char> bracketMap = {{')', '('}, {']', '['}, {'}', '{'}};

        for (char c : s)
        {
            // std::cout<< bracketMap[c]<< std::endl;
            if (bracketMap.count(c) == 0)
            {
                // If the character is an opening bracket, push it onto the stack
                bracketStack.push(c);
                std::cout<< bracketStack.top()<< std::endl;
            } 
            else 
            {
                // If the character is a closing bracket
                if (bracketStack.empty() || bracketStack.top() != bracketMap[c]) 
                {
                    
                    return false;  // Mismatched brackets
                }
                bracketStack.pop();
            }
        }

        return bracketStack.empty();  // If the stack is empty, all brackets are matched
    }
};

int main() {
    Solution solution;

    std::cout << std::boolalpha;
    std::cout << solution.isValid("()") << std::endl;       // Output: true
    std::cout << solution.isValid("()[]{}") << std::endl;   // Output: true
    std::cout << solution.isValid("(]") << std::endl;       // Output: false

    return 0;
}
