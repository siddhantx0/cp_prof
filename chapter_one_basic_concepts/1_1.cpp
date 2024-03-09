#include <iostream>
#include <string>

#define ll long long

ll euclid_gcd(ll m, ll n)
{
    // Given two positive integers m and n, find their greatest common divisor, that is, the largest positive integer that evenly divides both m and n.
    ll r = (m / n);

    if (r < 0)
        return -1;

    if (r == 0)
        return n;
    else
        return euclid_gcd(n, r);
}

int main(int argc, char **argv)
{
    std::cout << "starting program" << std::endl;
    std::cout << euclid_gcd(10, 1) << std::endl;
    std::cout << string("*", 10) << "starting program" << std::endl;
    return 0;
};