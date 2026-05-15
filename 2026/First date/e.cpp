#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    cin >> n;

    set<int> numbers;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        numbers.insert(x);
    }

    cout << n - static_cast<int>(numbers.size()) << '\n';

    return 0;
}



//