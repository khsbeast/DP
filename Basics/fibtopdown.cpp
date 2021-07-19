#include<bits/stdc++.h>

using namespace std;
int fib(int n,int dp[])
{
  if(n==0 || n==1)
    return 1;
  if(dp[n])
    return dp[n];
  return dp[n] = fib(n-1,dp)+fib(n-2,dp);
}
int main()
{
  int n;
  cin >> n;
  int dp[n+1] = {0};
  cout << fib(n,dp);
  for(int i = 0;i <= n;i++)
    cout << dp[i] << ' ';
}