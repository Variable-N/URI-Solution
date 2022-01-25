#include <bits/stdc++.h>
using namespace std;
int main () {
    float total=0,list [6] ={0,1.50,2.50,3.50,4.50,5.50};
    int N;
    cin >> N;
    while (N--) {
        int order,quantity;
        cin >> order >> quantity;
        total+=(list[order%10]*quantity);
    }
    cout << fixed << setprecision(2) << total << endl;
    return 0;
}

