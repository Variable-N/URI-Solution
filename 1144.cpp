#include <bits/stdc++.h>
using namespace std;
int main () {
    int c,i=1;
    cin >> c;
    int j=1;
    while (j<=c) {
        cout << i << " ";
        cout << i*i << " ";
        cout << i*i*i << endl;
        cout << i << " ";
        cout << i*i+1 << " ";
        cout << i*i*i+1 << endl;
        i++;
        j++;
    }
    return 0;
}
