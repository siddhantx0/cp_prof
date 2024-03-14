#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    ll towerOfHanoi = towerOfHanoiSolver(n, 1, 0, 0);
    cout << towerOfHanoi;
    return 0;
}