#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define SIZE6 1000000
#define INF 1e9

ll dp[SIZE6];

ll solve(ll x, vector<ll> &vals, unordered_map<ll, ll> &mp)
{
    if (x == 0)
        return 0;
    if (x < 0)
        return INF;
    if (dp[x] != -1)  // if we have already computed this number, then we shall return this:
        return dp[x]; // if already computed

    ll minCoins = INF;
    for (ll i = 0; i < vals.size(); ++i)
    {
        if (mp.count(x - vals[i]))
            return 1;
        minCoins = min(minCoins, solve(x - vals[i], vals) + 1);
    }

    dp[x] = (minCoins == INF) ? -1 : minCoins;
    return dp[x]; // return counts
};

int main()
{
    // setting dp array faster
    memset(dp, -1, sizeof(dp));
    unordered_map<ll, ll> mp;

    dp[0] = 0;

    ll n, x;
    cin >> n >> x;
    vector<ll> vals(n);
    for (ll i = 0; i < vals.size(); ++i)
    {
        cin >> vals[i];
        mp[vals[i]]++; // increment this value up by 1.
    }

    ll res = solve(x, vals, mp);
    if (res == INF)
        cout << "-1\n";
    else
        cout << res << "\n";

    return 0;
};