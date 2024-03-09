#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(int argc, char **argv)
{
    string n;
    getline(cin, n);
    if (n.size() == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    map<char, ll> mp = {{'A', 0}, {'T', 0}, {'G', 0}, {'C', 0}};
    char prev = n.at(0);
    ll max = 1;
    // p t
    // A T T C G G G A - n.size() = 8
    //
    // 1 2 1 3 1
    // 3
    ll temp = 1;
    for (ll i = 1; i < n.size(); ++i)
    {
        char curr = n.at(i);
        if (curr == prev)
        {
            temp += 1;
        }
        else
        {
            mp[prev] = std::max(mp[prev], temp);
            temp = 1;
        }
        max = std::max(mp[prev], max);
    }

    cout << max << "\n";
    return 0;
};