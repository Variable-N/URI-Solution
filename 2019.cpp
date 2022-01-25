#include <bits/stdc++.h>
using namespace std;
int main () {
    double V,R;
    while (cin >> V >> R) {
        double area = 3.14*pow((R/2),2);
        double height = V/area;
        cout << "ALTURA = " << fixed << setprecision(2) <<height << "\nAREA = " << area << endl;
    }
    return 0;
}
