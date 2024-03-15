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
        vector<int> v(n); // use () - vectors instead of [] - array
        for (int i = 0; i < n; ++i)
            cin >> v[i];
        if (is_sorted(v.begin(), v.end()))
        {
            cout << "YES" << endl;
        }
        else
        {
            bool flag = false;
            while (!is_sorted(v.begin(), v.end()) && !flag)
            {
                int n = v.size();
                for (int i = 0; i < v.size(); ++i)
                {
                    if (v[i] > 10)
                    {
                        // check if this is b
                        if (i + 1 < n && v[i] > v[i + 1] && v[i] > 10)
                        {
                            // we can split this
                            int ones = v[i] % 10;
                            int tens = (v[i] / 10) % 10; // trick was getting the correct digit
                            // insert into the vector by removing v[i] and then adding in the tens first then the ones
                            v[i] = tens;
                            v.insert(v.begin() + i + 1, ones);
                            n = v.size();
                            if (v[i] > v[i + 1] || v[i + 1] > v[i + 2])
                            {
                                flag = true;
                                break;
                            }
                        }
                    }
                    else if (i + 1 < n && v[i] > v[i + 1])
                    {
                        flag = true;
                        break;
                    }
                }
            }
            if (!flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}