#include <iostream>
using namespace std;
int main () {
    short int N;
    cin >> N;
    for (int i=1; i<=N; i++ ) {
        cout << i << " x " << N << " = " << i*N << endl;
    }
    return 0;
}

