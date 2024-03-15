// https://codeforces.com/contest/1948/problem/B
// trick was getting the correct digit
#include <bits/stdc++.h>
#define ll long long
using namespace std;

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<string> g(2), v(2); // grid = g, visited = v
        cin >> g[0] >> g[1];
        v[0] = v[1] = string(g[0].length(), 'F');

        v[0][0] = 'T';
        int x = 0, y = 0;
        while (true)
        {
            if (x + 1 < 2)
                g[x++][y];
            if (y + 1 < 2)
                g[x][y++];
        }

        // see if I can reach the bottom right of the place.
    }
}