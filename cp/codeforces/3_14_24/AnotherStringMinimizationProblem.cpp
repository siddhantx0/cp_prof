// https://codeforces.com/problemset/problem/1706/A
#include <iostream>
#include <string>
#define ll long long
using std::cout, std::cin, std::endl;

int main()
{
    int t;
    cin >> t;
    while (--t >= 0)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        std::string s(m, 'B');
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        for (int i = 0; i < n; ++i)
        {
            int end = std::max(m - a[i], a[i] - 1);
            int start = std::min(a[i] - 1, m - a[i]);

            if (s[start] == 'A')
                s[end] = 'A';
            else
                s[start] = 'A';
        }

        cout << s << endl;
    }
}