class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string ans = "";

        // Traverse characters of the first string
        for (int i = 0; i < strs[0].length(); i++) {

            char ch = strs[0][i];

            // Compare with all other strings
            for (int j = 1; j < strs.size(); j++) {

                // Check if index exists or characters differ
                if (i >= strs[j].length() || strs[j][i] != ch) {
                    return ans;
                }
            }

            // Character is common in all strings
            ans += ch;
        }

        return ans;
    }
};


//using hashing:-
// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {

//         string ans = "";
//         int n = strs.size();

//         for (int i = 0; i < strs[0].length(); i++) {

//             unordered_map<char, int> freq;

//             for (int j = 0; j < n; j++) {

//                 if (i >= strs[j].length()) {
//                     return ans;
//                 }

//                 freq[strs[j][i]]++;
//             }

//             bool found = false;

//             for (auto it : freq) {

//                 if (it.second == n) {
//                     ans += it.first;
//                     found = true;
//                     break;
//                 }
//             }

//             if (!found) {
//                 return ans;
//             }
//         }

//         return ans;
//     }
// };
