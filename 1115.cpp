#include <bits/stdc++.h>
using namespace std;
int main () {
    int m,n;
    cin >> m >> n;
    while (m!=0 && n!=0) {
        if (m>0 && n>0) {
            cout << "primeiro" << endl;
        }
        else if (m>0 && n<0) {
            cout << "quarto" << endl;
        }
        else if (m<0 && n<0) {
            cout << "terceiro" << endl;
        }
        else{
            cout << "segundo" << endl;
        }
        cin >> m >> n;
    }
    return 0;
}


