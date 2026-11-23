class Solution {
public:

    // Step 1: Count reverse pairs
    int countPairs(vector<int>& nums, int low, int mid, int high) {

        int count = 0;
        int j = mid + 1;

        for(int i = low; i <= mid; i++) {

            while(j <= high && (long long)nums[i] > 2LL * nums[j]) {
                j++;
            }

            count += (j - (mid + 1));
        }

        return count;
    }

    // Step 2: Merge two sorted halves
    void merge(vector<int>& nums, int low, int mid, int high) {

        vector<int> temp;

        int left = low;
        int right = mid + 1;

        while(left <= mid && right <= high) {

            if(nums[left] <= nums[right]) {
                temp.push_back(nums[left]);
                left++;
            }
            else {
                temp.push_back(nums[right]);
                right++;
            }
        }

        while(left <= mid) {
            temp.push_back(nums[left]);
            left++;
        }

        while(right <= high) {
            temp.push_back(nums[right]);
            right++;
        }

        for(int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }
    }

    // Step 3: Modified Merge Sort
    int mergeSort(vector<int>& nums, int low, int high) {

        if(low >= high) {
            return 0;
        }

        int mid = low + (high - low) / 2;

        int count = 0;

        count += mergeSort(nums, low, mid);

        count += mergeSort(nums, mid + 1, high);

        count += countPairs(nums, low, mid, high);

        merge(nums, low, mid, high);

        return count;
    }

    int reversePairs(vector<int>& nums) {

        int n = nums.size();

        return mergeSort(nums, 0, n - 1);
    }
};
