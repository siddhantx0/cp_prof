#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE6 1000000

ll dp[SIZE6];

ll solve(ll n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    if (dp[n] > 0)
        return dp[n];

    ll ans = 0;
    for (int i = 1; i <= 6; ++i)
        ans = (ans + solve(n - i)) % MOD;

    dp[n] = ans;
    return dp[n];
};

int main()
{
    for (ll i = 0; i < sizeof(dp) / sizeof(ll); ++i)
        dp[i] = -1;
    dp[0] = 1;

    ll n;
    cin >> n;
    cout << solve(n);
    return 0;
};