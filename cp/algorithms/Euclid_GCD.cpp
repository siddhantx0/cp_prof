#include <iostream>

using namespace std;

#define ll long long

ll gcd(ll m, ll n)
{
    ll r = m % n;
    if (r == 0)
        return n;
    else
        return gcd(n, r);
}

int main()
{
    cout << gcd(123123, 12);
}