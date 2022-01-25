#include <bits/stdc++.h>
using namespace std;
int main () {
    int N;
    string hoe="";
    cin >> N;
    while (N--) {
        if(N!=0) hoe+="Ho ";
        else hoe+="Ho!";
    }
    cout << hoe << endl;
    return 0;
}

