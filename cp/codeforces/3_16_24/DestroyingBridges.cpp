#include <iostream>
#include <queue>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k >= n - 1 || k == (n * (n - 1)) / 2)
            cout << 1 << endl;
        else
            cout << n << endl;
    }
}