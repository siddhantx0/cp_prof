#include <iostream>
#include <string>

#define ll long long

using namespace std;

int main(int argc, char **argv)
{
    ll n;
    cin >> n;
    while (n > 1)
    {
        cout << n << " ";
        if (n % 2 == 0)
            n /= 2;
        else
            n = n * 3 + 1;
    }
    cout << n << endl;
    return 0;
};