#include <iostream>
#include <climits>

int myAtoi(std::string s) {
    int i = 0;
    int n = s.length();

    // Step 1: Read and ignore leading whitespace
    while (i < n && s[i] == ' ') {
        i++;
    }

    // Step 2: Check for '+' or '-'
    int sign = 1;
    if (i < n && (s[i] == '+' || s[i] == '-')) {
        sign = (s[i++] == '-') ? -1 : 1;
    }

    // Step 3: Read digits until a non-digit character or end of string
    long result = 0;
    while (i < n && isdigit(s[i])) {
        result = result * 10 + (s[i++] - '0');

        // Step 5: Clamp the result to the 32-bit signed integer range
        if (result * sign > INT_MAX) {
            return INT_MAX;
        } else if (result * sign < INT_MIN) {
            return INT_MIN;
        }
    }

    // Step 4: Apply the sign
    return result * sign;
}

int main() {
    // Example usage:
    std::string input1 = "42";
    std::string input2 = "   -42";
    std::string input3 = "4193 with words";

    std::cout << "Example 1: " << myAtoi(input1) << std::endl;
    std::cout << "Example 2: " << myAtoi(input2) << std::endl;
    std::cout << "Example 3: " << myAtoi(input3) << std::endl;

    return 0;
}
