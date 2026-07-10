class Solution {
public:
    string convert(string s, int numRows) {

        // No zigzag possible
        if (numRows == 1 || numRows >= s.length())
            return s;
        vector<string> rows(numRows);

        int currentRow = 0;
        bool goingDown = false;

        for (char ch : s) {

            rows[currentRow] += ch;

            // Reverse direction at first or last row
            if (currentRow == 0 || currentRow == numRows - 1)
                goingDown = !goingDown;

            if (goingDown)
                currentRow++;
            else
                currentRow--;
        }

        string ans = "";

        for (string row : rows)
            ans += row;

        return ans;
    }
};