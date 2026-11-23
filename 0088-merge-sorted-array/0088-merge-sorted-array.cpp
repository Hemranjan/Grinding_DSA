// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i = m - 1;       // last element in nums1
//         int j = n - 1;       // last element in nums2
//         int k = m + n - 1;   // last position in nums1

//         // merge from the end
//         while (i >= 0 && j >= 0) {
//             if (nums1[i] > nums2[j]) {
//                 nums1[k--] = nums1[i--];
//             } else {
//                 nums1[k--] = nums2[j--];
//             }
//         }

//         // copy remaining elements of nums2 (if any)
//         while (j >= 0) {
//             nums1[k--] = nums2[j--];
//         }
//     }
// };

//nums1 has extra space at the end (filled with zeros) to hold all elements from nums2.

//m = number of valid elements in nums1.

//n = number of elements in nums2.




// merge from the start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        vector<int> temp;
        int i=0;
        int j=0;

while(i < m && j < n) {
    if(nums1[i] < nums2[j]) {
        temp.push_back(nums1[i]);
        i++;
    }

    else {
        temp.push_back(nums2[j]);
        j++;
    }
}

while(i < m) {
    temp.push_back(nums1[i]);
    i++;
}

while(j < n) {
    temp.push_back(nums2[j]);
    j++;
}

for(int i=0;i < m + n;i++) {
    nums1[i] = temp[i];
}
        // vector<int> temp;
        // int i = 0, j = 0;

        // // merge from start
        // while (i < m && j < n) {
        //     if (nums1[i] <= nums2[j]) {
        //         temp.push_back(nums1[i++]);
        //     } else {
        //         temp.push_back(nums2[j++]);
        //     }
        // }

        // // remaining elements
        // while (i < m) temp.push_back(nums1[i++]);
        // while (j < n) temp.push_back(nums2[j++]);

        // // copy back to nums1
        // for (int k = 0; k < m + n; k++) {
        //     nums1[k] = temp[k];
        // }
    }
};

