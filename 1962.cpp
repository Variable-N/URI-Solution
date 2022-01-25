#include <bits/stdc++.h>
using namespace std;
int main () {
    long long N,answer;
    cin >> N;
    while (N--) {
    long long year;
    cin >> year;
    if (year > 2015) {
        cout << year-2014 << " A.C." << endl;
    }
    else if (year<2015){
        cout << 2015-year << " D.C." << endl;
    }
    else cout << 1 << " A.C." << endl;
    }

    return 0;
}
