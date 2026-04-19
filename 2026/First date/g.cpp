#include <iostream>
#include <set>

using namespace std;

int main ()
{
    set<int> s;
    int inp;
    cin >> inp;
    for (int i = 0; i < inp; i++)
    {
        int n;
        cin >> n;
        s.insert(n);
    }

    cout << inp - s.size() << "\n";

    return 0;
}

    