class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> freq;

        // Count frequency of each element
        for(int num : nums) {
            freq[num]++;
        }

        int maxFreq = 0;


        // Find the most frequent element
        for(auto it : freq) {
            int num = it.first;
            int count = it.second;
            maxFreq = max(maxFreq, it.second);
        }


        int ans = 0;
        for(auto it:freq) {

            if(it.second == maxFreq) {
                ans = ans + it.second;
            }
        }
        return ans;
    }
};