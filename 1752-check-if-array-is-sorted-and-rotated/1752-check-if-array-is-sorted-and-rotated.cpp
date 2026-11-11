class Solution {
public:

    bool check(vector<int>& nums) {
        
        int count = 0;
        int n = nums.size();

        //only imagine and work on the input in the given problem and find logic.
        //front traversing
        for(int i=1;i<n;i++) {
            if(nums[i-1] > nums[i]) {
                count++;
            }

            // if(nums[i] > nums[(i + 1) % n]) {  
            //     count++;

            //We want to compare the last element with the first element.
            //Modulo solves this problem.
            // }
        }

        //back traversing
        if(nums[n-1] > nums[0]) {     //last element dekhte hai ki bara hai ya nahi
            count++;
        }

        if(count > 1) {
            return false;
        }
        return true;
        //return count <=1;
        
    }
};