
// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {

//         int sToT[256] = {0};
//         int tToS[256] = {0};

//         for(int i = 0; i < s.length(); i++) {

//             if(sToT[s[i]] == 0 && tToS[t[i]] == 0) {

//                 sToT[s[i]] = t[i];
//                 tToS[t[i]] = s[i];

//             }
//             else if(sToT[s[i]] != t[i] || tToS[t[i]] != s[i]) {

//                 return false;
//             }
//         }

//         return true;
//     }
// };


class Solution {
public:
    bool isIsomorphic(string s, string t) {

        int sToT[256];
        int tToS[256];

        //We will use a slightly improved version of the previous code. Instead of initializing arrays with 0, we initialize them with -1. This avoids confusion because ASCII character value 0 is also valid.
        
        fill(sToT, sToT + 256, -1);
        fill(tToS, tToS + 256, -1);

        for(int i = 0; i < s.length(); i++) {

            if(sToT[s[i]] == -1 && tToS[t[i]] == -1) {  
                //The character from s has not been mapped before.The character from t has not been mapped before.

                sToT[s[i]] = t[i];
                tToS[t[i]] = s[i];

            }
            else if(sToT[s[i]] != t[i] || tToS[t[i]] != s[i]) {

                return false;
            }
        }

        return true;
    }
};



//For every index i, the character at s[i] must correspond to the character at t[i]. And whenever the same character appears again in s, it must map to the same character in t.

//Why two arrays?
// The first array checks that one character in s always maps to the same character in t.

// The second array checks that two different characters in s do not map to the same character in t.

// This is how we enforce both rules of isomorphic strings.