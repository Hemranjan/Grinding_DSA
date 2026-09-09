class Solution {
public:

    bool isVowel(char ch)
    {
        return ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u';
    }

    int countVowelSubstrings(string word)
    {
        int ans = 0;

        for(int i = 0; i < word.length(); i++)
        {
            int freq[5] = {0};
            int distinct = 0;

            for(int j = i; j < word.length(); j++)
            {
                if(!isVowel(word[j]))
                    break;

                int index;

                if(word[j] == 'a')
                    index = 0;
                else if(word[j] == 'e')
                    index = 1;
                else if(word[j] == 'i')
                    index = 2;
                else if(word[j] == 'o')
                    index = 3;
                else
                    index = 4;

                if(freq[index] == 0)
                    distinct++;

                freq[index]++;

                if(distinct == 5)
                    ans++;
            }
        }

        return ans;
    }
};