#include <iostream>

#define ll long long

using namespace std;

int main(int argc, char **argv)
{
    ll n;
    cin >> n;
    ll running_sum = 0;

    // summation formula n(n+1) / 2
    for (ll i = 1; i < n; i++)
    {
        ll g;
        cin >> g;
        running_sum += g;
    }

    cout << ((n * (n + 1) / 2) - running_sum);
    return 0;
};