#include <bits/stdc++.h>
using namespace std;
int main () {
    short j=7,i=1,c=1;
    while (i<10) {
        cout << "I=" << i << " " << "J=" << j << endl;
        j--;
        c++;
        if(c==4) {
            i+=2;
            j=7;
            c=1;
        }
    }
    return 0;
}

