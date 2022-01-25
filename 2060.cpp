#include <bits/stdc++.h>
using namespace std;
int main () {
    int N,X,div2=0,div3=0,div4=0,div5=0;
    cin >> N;
    while (N--) {
        cin >> X;
        if(X%2==0) div2++;
        if(X%3==0) div3++;
        if(X%4==0) div4++;
        if(X%5==0) div5++;
    }
    cout << div2 << " Multiplo(s) de 2\n" << div3 << " Multiplo(s) de 3\n" << div4 << " Multiplo(s) de 4\n" << div5 << " Multiplo(s) de 5" << endl;

}
