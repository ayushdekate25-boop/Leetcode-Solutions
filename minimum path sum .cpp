class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();

        vector<vector<int>> dp(n,
                               vector<int>(n,0));

        for(int j = 0; j < n; j++)
            dp[0][j] = matrix[0][j];

        for(int i = 1; i < n; i++) {
            for(int j = 0; j < n; j++) {

                int up = matrix[i][j] + dp[i-1][j];

                int led = 1e9;
                int rd = 1e9;

                if(j > 0)
                    led = matrix[i][j] + dp[i-1][j-1];

                if(j < n-1)
                    rd = matrix[i][j] + dp[i-1][j+1];

                dp[i][j] = min(up, min(led, rd));
            }
        }

        int ans = INT_MAX;

        for(int j = 0; j < n; j++)
            ans = min(ans, dp[n-1][j]);

        return ans;
    }
};