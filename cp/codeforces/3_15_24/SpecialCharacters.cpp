// YAY: https://codeforces.com/contest/1948/problem/A
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1 || n % 2 == 1)
            cout << "NO" << endl;
        else
        {
            string use("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
            int ref = 0;
            string built = "";
            for (int i = 0; i < n / 2; i++)
                built = built + string(2, use[ref++]);
            cout << "YES" << endl;
            cout << built << endl;
        }
    }
}