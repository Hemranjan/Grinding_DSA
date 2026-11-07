// class Solution {
// public:
//     string frequencySort(string s) {

//         unordered_map<char, int> ch;
//         string ans;

//         for(int i = 0; i < s.length(); i++) {
//             ch[s[i]]++;
//         }

//         for(auto it : ch) {
//             ans.push_back(it.first);
//         }

//         sort(ans.begin(), ans.end(), [&](char a, char b) {
//             return ch[a] > ch[b];
//         });

//         string result = "";

//         for(char c : ans) {
//             result.append(ch[c], c);
//         }

//         return result;
//     }
// };



class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char, int> mp;

        // Count frequency
        for(int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }

        // Sort characters based on frequency
        sort(s.begin(), s.end(), [&](char a, char b) {

            if(mp[a] == mp[b]) {
                return a < b;
            }
            return mp[a] > mp[b];
        });

        return s;
    }
};
