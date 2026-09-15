class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {

        int n = cost.size();

        //bottom-up:-
        vector<int> dp(n + 1,-1);

        // dp[0] = 0;
        // dp[1] = 0;
         
         dp[0] = cost[0];
dp[1] = cost[1];
        for(int i = 2; i < n; i++) {  //loop1
        dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
    }

    return min(dp[n-1], dp[n-2]);
    

        // for(int i = 2; i <= n; i++)  //loop2
        // {
        //     dp[i] = min(dp[i-1] + cost[i-1],
        //                 dp[i-2] + cost[i-2]);
        // }

        // return dp[n];
    }
};


//For understanding:-
// class Solution {
// public:

//     //recursion only:-
//     int solve1(vector<int>& cost, int n) {
//         //BASE CASE
//         if(n == 0)
//             return cost[0];
//         if(n == 1)
//             return cost[1];

//         int ans = cost[n] + min(solve1(cost, n-1), solve1(cost, n-2));
//         return ans;
//     }


//     //top-down:-
//     int solve2(vector<int>& cost, int n, vector<int>& dp) {
//     //BASE CASE
//     if(n == 0)
//         return cost[0];

//     if(n == 1)
//         return cost[1];

//     //step3:
//     if(dp[n] != -1)
//         return dp[n];

//     //step2:
//     dp[n] = cost[n] + min(solve2(cost, n-1, dp), solve2(cost, n-2, dp));
//     return dp[n];
//     }  



//     //bottom-up:-
//     int solve3(vector<int>& cost, int n) {
//     //step1: Creation of dp array
//     vector<int> dp(n+1);

//     //step2: base case analyse
//     dp[0] = cost[0];
//     dp[1] = cost[1];

//     //3rd step
//     for(int i = 2; i < n; i++) {
//         dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
//     }

//     return min(dp[n-1], dp[n-2]);
//     }


//     //space optimised:-
//     int solve4(vector<int>& cost, int n) {

//     int prev2 = cost[0];
//     int prev1 = cost[1];

//     for(int i = 2; i < n; i++) {

//         int curr = cost[i] + min(prev1, prev2);

//         prev2 = prev1;
//         prev1 = curr;
//     }

//     return min(prev1, prev2);
//     }

//     int minCostClimbingStairs(vector<int>& cost) {
//         int n = cost.size();

//         //solve1:-
//         int ans = min(solve1(cost, n-1), solve1(cost, n-2));
//         return ans;

//         //solve2:-
//         vector<int> dp(n+1, -1);

//         int ans = min(solve2(cost, n-1, dp), solve2(cost, n-2, dp));
//         return ans;

//         //solve3:-
//         return solve3(cost, n);

//         //solve4:-
//         return solve4(cost, n);



//     }
// };