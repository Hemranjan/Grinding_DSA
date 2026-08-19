class Solution {
public:

    bool isPrime(int n) {
        if (n < 2)
            return false;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }

        return true;
    }

    int diagonalPrime(vector<vector<int>>& nums) {

        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {

            // Main diagonal
            int val1 = nums[i][i];

            if (isPrime(val1)) {
                ans = max(ans, val1);
            }

            // Secondary diagonal
            int val2 = nums[i][n - i - 1];

            if (isPrime(val2)) {
                ans = max(ans, val2);
            }
        }

        return ans;
    }
};