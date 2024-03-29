int knapSack(int W, int wt[], int val[], int n)
{
    vector<int> dp(W + 1, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = W; j >= 0; j--)
        {
            if (wt[i] <= j)
            {
                int notTake = dp[j];
                int take = INT_MIN;
                if (wt[i] <= j)
                {
                    take = val[i] + dp[j - wt[i]];
                }
                dp[j] = max(take, notTake);
            }
        }
    }

    return dp[W];
}