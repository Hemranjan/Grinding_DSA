
// class Solution {
// public:
//     bool isAnagram(string &s, string &t) {

//         if(s.length() != t.length()) {
//             return false;
//         }

//         int freq[26] = {0};

//         for(int i = 0; i < s.length(); i++) {
//             freq[s[i] - 'a']++;
//             freq[t[i] - 'a']--;
//         }

//         for(int i = 0; i < 26; i++) {
//             if(freq[i] != 0) {
//                 return false;
//             }
//         }

//         return true;
//     }
// };


class Solution {
public:
    bool isAnagram(string &s, string &t) {

        if(s.length() != t.length()) {
            return false;
        }

        unordered_map<char, int> mp;

        // Count frequency of characters in s
        for(int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }

        // Decrease frequency using characters of t
        for(int i = 0; i < t.length(); i++) {
            mp[t[i]]--;

            if(mp[t[i]] < 0) {
                return false;
            }
        }

        return true;
    }
};
