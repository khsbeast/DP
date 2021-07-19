//fib using bottom up(begin from base case)
#include<bits/stdc++.h>

using namespace std;
int fib(int n,int dp[])
{
  dp[0]=dp[1]=1;
  for(int i = 2;i <=n;i++)
    dp[i] = dp[i-1]+dp[i-2];
}
int main()
{
  int n;
  cin >> n;
  int dp[n+1] = {0};
  fib(n,dp);
  cout << dp[n];
}