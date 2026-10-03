class Solution {
public:
    int myAtoi(string s) {

        int i = 0;
        int n = s.length();

        // Step 1: Skip leading spaces
        while (i < n && s[i] == ' ') {
            i++;
        }

        // Step 2: Check sign
        int sign = 1;

        if (i < n && s[i] == '-') {
            sign = -1;
            i++;
        }
        else if (i < n && s[i] == '+') {
            i++;
        }

        // Step 3: Convert digits
        long long ans = 0;

        while (i < n && s[i] >= '0' && s[i] <= '9') {

            int digit = s[i] - '0';

            ans = ans * 10 + digit;

            // Step 4: Check overflow
            if (sign == 1 && ans > INT_MAX) {
                return INT_MAX;
            }

            if (sign == -1 && -ans < INT_MIN) {
                return INT_MIN;
            }

            
        }

        return sign * ans;
    }
};