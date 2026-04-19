#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;
typedef unsigned long long int ulli;

bool
is_prime(ulli n)
{
    if (n == 2 or n == 3)
    {
        return true;
    }

    for (ulli i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

vector<ulli>
primes(ulli n)
{
    if (n == 1)
    {
        return {};
    }

    //ulli top = ceil(sqrt(n)) + 10;
    vector<ulli> p;
    p.push_back(2);

    for (ulli i = 3; i <= n; i++)
    {
        if (is_prime(i))
        {
            p.push_back(i);
        }
    }

    return p;
}

bool
sort_vec (const vector<ulli> &a, const vector<ulli> &b)
{
    for (size_t i = 0; i < min(a.size(), b.size()); i++)
    {
        if (a[i] < b[i])
        {
            return true;
        }

        if (a[i] > b[i])
        {
            return false;
        }
    }

    if (a.size() > b.size())
    {
        return false;
    }

    return true;
}

int main ()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);ios_base::sync_with_stdio(false);

    ulli n = 1, q = 0;
    vector<vector<ulli>> vVfp;
    vector<ulli> vPu;

    cin >> n;
    cin >> q;

    vPu = primes(n);

    for (ulli i = 1; i <= n; i++)
    {
        vector<ulli> vfp;

        for (ulli j : vPu)
        {
            if (j > i)
            {
                break;
            }
            ulli flop = i;
            while (flop % j == 0) 
            {
                vfp.push_back(j);
                flop /= j;
            }
        }

        vVfp.push_back(vfp);
    }

    sort(vVfp.begin(), vVfp.end(), sort_vec);

    vector<ulli> vulli; 
    for (ulli i = 1; i <= q; i++)
    {
        ulli num = 0;
        cin >> num;

        ulli mult = 1;
        for (const auto &u : vVfp[num - 1])
        {
            mult *= u;
        }
        vulli.push_back(mult);
    }

    for (ulli u : vulli)
    {
        cout << u << "\n";
    }

    return 0;
}
