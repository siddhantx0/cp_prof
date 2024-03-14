#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(int argc, char **argv)
{
    string n;
    getline(cin, n);

    if (n.size() == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    ll l[]{0, 0, 0, 0};
    ll temp = 1;
    for (int i = 1; i < n.size(); ++i)
    {
        if (n.at(i) == n.at(i - 1))
            temp += 1;
        else
        {
            switch (n.at(i - 1))
            {
            case 'A':
                l[0] = std::max(l[0], temp);
                break;
            case 'T':
                l[1] = std::max(l[1], temp);
                break;
            case 'G':
                l[2] = std::max(l[2], temp);
                break;
            case 'C':
                l[3] = std::max(l[3], temp);
                break;
            default:
                break;
            }
            temp = 1;
        }
    }

    cout << std::max(*std::max_element(l, l + sizeof(l) / sizeof(l[0])), temp) << endl;
    return 0;
};