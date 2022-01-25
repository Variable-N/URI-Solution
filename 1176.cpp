#include <bits/stdc++.h>
using namespace std;
int main () {
    int N;
    cin >> N;
    while (N--) {
        long a=0,b=1;
        int n,count =2;
        cin >> n;
        if (n==0 || n==1) {
            cout << "Fib(" << n << ") = " << n << endl;
        }
        else {
            for (int i=2; i<=n;i++) {
                int temp=b;
                b+=a;
                a=temp;
            }
            cout << "Fib(" << n << ") = " << b << endl;
        }

    }
    return 0;
}

