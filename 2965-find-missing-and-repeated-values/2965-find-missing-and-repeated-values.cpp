class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int,int> freq;
        vector<int> ans;

        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                freq[grid[i][j]]++;
            }
        }

        for(auto it : freq) {
            if(it.second == 2) {
                ans.push_back(it.first);
            }
        }
        
        for(int i = 1; i <= n*n; i++) {
            if(freq.find(i) == freq.end()) {  
                ans.push_back(i);
            }
        }

        return ans;
    }
};