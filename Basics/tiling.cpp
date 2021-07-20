//bottom up
void tiling(int n,int m,int dp[])
{
  for(int i = 0; i <=n ;i++)
  {
    if(i < m)
      dp[i]=1;
    else if(i==m)
      dp[i] = 2;
    else
      dp[i] = dp[i-1] + dp[i-m];
  }
}
int main()
{
  int n,m;
  cin >> n >> m;
  int dp[n+1];
  tiling(n,m,dp);
  cout << dp[n];
}