class Solution {
public:

    void reverse(vector<char>& s,int start,int end) {
        if(start>end) {
            return;
        }

        while(start < end) {
            swap(s[start],s[end]);
            start++;
            end--;
        }

    }
    void reverseString(vector<char>& s) {
        // int start = 0;
        // int end = s.size()-1;

        // while(start<=end) {
        //     swap(s[start],s[end]);
        //     start++;
        //     end--;
        // }

        int start = 0;
        int end = s.size() - 1;
         return reverse(s,start,end);

        // while(start < end) {
        //     swap(s[start],s[end]);
        //     start++;
        //     end--;
        // }
    }
};