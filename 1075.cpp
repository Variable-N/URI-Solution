#include <iostream>
using namespace std;
int main () {
    long N;
    cin >> N;
    for (int i=0; i<=10000; i++ ) {
        if((N*i+2) >10000) {
            break;
        }
        cout << N*i+2 << endl;
    }
    return 0;
}
