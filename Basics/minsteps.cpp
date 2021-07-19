//Bottom up dp
#include<bits/stdc++.h>

using namespace std;
int minsteps(int n,int dp[])
{
  for(int i = 2;i <= n;i++)
  {
    int a,b,c;
    a=b=c=INT_MAX;
    if(i % 2 == 0)
      a=dp[i/2];
    if(i % 3 == 0)
      b=dp[i/3];
    c=dp[i-1];
    dp[i] =1+ min(a,min(b,c));
  }
}
int main()
{
  int n;
  cin >> n;
  int dp[n+1] = {0};
  minsteps(n,dp);
  for(int i = 0;i <= n;i++)
    cout << dp[i] << ' ';
}