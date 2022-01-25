#include <bits/stdc++.h>
using namespace std;
int main () {
    int N;
    cin >> N;
    while (N--) {
        string input;
        int dummy;
        cin >> input >> dummy;
        if(input[0]=='T' && input[1]=='h') cout << "Y" << endl;
        else cout << "N" << endl;
    }
    return 0;
}
