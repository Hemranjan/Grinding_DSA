class Solution {
public:

    vector<int> eachRow(int n) {
        vector<int> mpp;

        long long ans = 1;
        int row = n + 1;

        mpp.push_back(1);

        for (int i = 1; i < row; i++) {
            ans = ans * (row - i);
            ans = ans / i;

            mpp.push_back(ans);
        }

        return mpp;
    }

    vector<int> getRow(int rowIndex) {
        return eachRow(rowIndex);
    }
};
