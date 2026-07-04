
class Solution {
public:
    int f(int ind,
          int target,
          vector<int>& nums,
          vector<vector<int>>& dp) {

        if (ind == 0) {
            if (target == 0 && nums[0] == 0)
                return 2;
            if (target == 0 || target == nums[0])
                return 1;
            return 0;
        }

        if (dp[ind][target] != -1)
            return dp[ind][target];

        int notTake =
            f(ind - 1,
              target,
              nums,
              dp);

        int take = 0;

        if (nums[ind] <= target)
            take = f(ind - 1,
                     target - nums[ind],
                     nums,
                     dp);

        return dp[ind][target] =
               take + notTake;
    }

    int findTargetSumWays(vector<int>& nums,
                          int target) {

        int sum = accumulate(nums.begin(),
                             nums.end(), 0);

        if (abs(target) > sum ||
            (sum + target) % 2)
            return 0;

        int k = (sum + target) / 2;

        int n = nums.size();

        vector<vector<int>> dp(
            n,
            vector<int>(k + 1, -1));

        return f(n - 1,
                 k,
                 nums,
                 dp);
    }
};
