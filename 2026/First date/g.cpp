#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<bool> seen(n + 1, false);
    int trades = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (seen[x])
        {
            trades++;
        }
        else
        {
            seen[x] = true;
        }
    }

    cout << trades << '\n';

    return 0;
}


