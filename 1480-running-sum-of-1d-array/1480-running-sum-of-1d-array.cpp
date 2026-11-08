class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
       int sum = 0;
       int i=0;
       vector<int> ans;

       for(int j=0;j<nums.size();j++) {
        sum = sum + nums[j];
        ans.push_back(sum);

       }

       return ans; 
    }
};