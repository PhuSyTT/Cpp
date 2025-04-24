#include <bits/stdc++.h>
using namespace std;
vector<int> a(1000);
int n, i, ans;

void sloop()
{
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i];
}

void solve()
{
    vector<int> dp(n+1, 0);
    ans=0;
    for (i=1;i<=n;i++)
    {
        dp[i]=a[i];
        for (int j=1;j<i;j++)
            if  (a[j]>=a[i]) dp[i]=max(dp[i], dp[i]+a[j]);
        cout<<dp[i]<<endl;
        ans=max(ans, dp[i]);
    }
    cout<<ans;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    sloop();
    solve();
    return 0;
}