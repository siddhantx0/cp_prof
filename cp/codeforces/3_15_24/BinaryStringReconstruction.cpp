// https://codeforces.com/problemset/problem/1400/C
// @TODO: https://chat.openai.com/share/63a7bf89-a817-4b83-84c4-9212736ca683
#include <iostream>
#include <string>
#define ll long long
using std::cout, std::cin, std::endl, std::string;

void solve(string s)
{
    int x = 0;
    cin >> x;
    string w(s.size(), '.');

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '0')
        {
            if (i - x >= 0)
                w[i - x] = '0';
            if (i + x < n)
                w[i + x] = '0';
        }
    }

    for (int i = 0; i < s.size(); ++i)
    {
        bool satisfied = false;
        int a = s.size() - x;
        int b = s.size() + x - 1;

        if (a >= 0 && s[a] == '1')
        {
            w[a] = 1;
            satisfied = true;
        }
        if (b < s.size() && s[b] == '1')
        {
            w[b] = 1;
            satisfied = true;
        }
        if (!satisfied)
        {
            cout << -1 << endl;
            return;
        }
    }

    for (int i = 0; i < s.size(); ++i)
    {
    }

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] != w[i])
        {
            cout << -1 << endl;
            return;
        }
    }

    cout << w << endl;
}

int main()
{
    int t;
    cin >> t;
    while (--t >= 0)
    {
        string s;
        cin >> s;
        solve(s);
    }
}