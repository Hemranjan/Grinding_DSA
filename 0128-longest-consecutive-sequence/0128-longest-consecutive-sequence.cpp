class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int n = nums.size();

        if(n == 0) return 0;

        sort(nums.begin(), nums.end());

        int count = 1;
        int maxi = 1;

        for(int i = 1; i < n; i++) {

            if(nums[i] == nums[i-1]) {
                continue;
            }

            else if(nums[i] == nums[i-1] + 1) {
                count++;
            }

            else {
                count = 1;
            }

            maxi = max(maxi, count);
        }

        return maxi;
    }
};



// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         int n = nums.size();
//         int count = 0;
//         int j=1;

//         for(int i=0;i<n;i++) {
//             if(nums[i] == nums[j] + 1) {
//                 count++;
//                 j++;
//             }

//         }

//         return count;
//     }
// };