#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    int people = 0;
    int products = 0;
    double accPe = 0;
    double accPro = 0;
    
    cin >> products;
    cin >> people;
    for (int i = 0; i < products; i++)
    {
        int n = 0;
        cin >> n;
        accPro += n;
    }
    
    for (int i = 0; i < people; i++)
    {
        int n = 0;
        cin >> n;
        accPe += n;
    }
 
    if (accPe >= ceil(accPro * 1.1))
    {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }

    return 0;
}
