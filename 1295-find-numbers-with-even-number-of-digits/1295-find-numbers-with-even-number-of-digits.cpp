class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int count = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            int n = nums[i];
            int digitCount = 0;

            while (n > 0)
            {
                digitCount++;
                n = n / 10;
            }

            if (digitCount % 2 == 0)
            {
                count++;
            }
        }

        return count;
    }
};