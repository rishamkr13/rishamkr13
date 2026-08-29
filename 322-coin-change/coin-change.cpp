class Solution {
public:
    int solve(vector<int>& coins,int i , int amount,vector<vector<int>>& dp){

        
            if(amount==0){
                return 0;
            }
        
        if(i<0 || amount <0) return 1e9;
        if(dp[i][amount]!=-1) return dp[i][amount];
        int take = 1e9;
        if(coins[i]<=amount){
            take =1+  solve(coins,i,amount-coins[i],dp);
        }

        int no = solve(coins,i-1,amount,dp);
        return dp[i][amount] =min(take , no);
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> dp(coins.size(),vector<int> (amount+1,-1));
        int ans = solve(coins, coins.size()-1,amount,dp) ;
        if(ans>=1e9){
            return -1;
        }
        return ans;
    }
};