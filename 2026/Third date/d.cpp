#include <iostream>
#include <ios>
#include <math.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    long long c11, c12, c21, c22, caMin, r1, r2;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> c11 >> c12 >> r1;
        cin >> c21 >> c22 >> r2;
        cin >> caMin;

        double distancia = sqrt(pow(c11 - c21, 2) + pow(c12 - c22, 2));
        c21 = c11;
        c22 = c12 + distancia;
        double interseccion = distancia - sqrt(pow(c11 + r1 - c21 + r2, 2) + pow(c12 + r1 - c22 + r2, 2));

        double cam = interseccion + 2*(r1 + r2);

        // cout << "distancia: " << distancia << "\n";
        // cout << "interseccion: " << interseccion << "\n";

        
        if ((cam > 2*(r1 + r2)) || cam < caMin)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
    }

}