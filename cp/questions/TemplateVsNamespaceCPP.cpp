#include <bits/stdc++.h>
#include <numeric>

using namespace std;

#define ll long long

template <typename T>
T myMax(T x, T y)
{
    return (x > y) ? x : y;
}

template <typename T>
T gcd_s(T m, T n)
{
    T r = m % n;
    if (r == 0)
        return n;
    else
        return gcd(n, r);
}

template <typename T>
auto gcd(T m, T n) -> T
{
    T r = m % n;
    return (r == 0) ? n : gcd(n, r);
}

template <typename A, typename B>
auto sum(A a, B b) -> decltype(a + b) // declaring the type of "the sum of a and b"
{
    return a + b;
}

int main()
{
    ll a = 1234, b = 58123;
    cout << myMax<ll>(a, b) << endl;
    cout << gcd<ll>(a, b) << endl;
    cout << std::gcd(a, b) << endl;

    decltype(a) c = 1124213; // use decltype to determine the type of the object.

    return 0;
}
