#include <bits/stdc++.h>
using namespace std;
int main () {
    int xf,yf,xi,yi,vi,r1,r2;
    while (cin >> xf >> yf >> xi >> yi >> vi >> r1 >> r2){
        double distance=sqrt(pow(xf-xi,2)+pow(yf-yi,2))+(1.5*vi);
        cout << ((distance<=r1+r2)? "Y":"N") << endl;
    }
    return 0;
}
