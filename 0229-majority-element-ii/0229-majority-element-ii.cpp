class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        
        unordered_map<int,int> freq;
        int maxi = 0;
        vector<int> ans;


       for(int i=0;i<n;i++) {
        freq[nums[i]]++;
       } 

       for(auto it:freq) {
        
        if(it.second > n/3) {
            // maxi = it.second;
            // ans = it.first;
            ans.push_back(it.first);
        }
       }

       return ans;
    }
};