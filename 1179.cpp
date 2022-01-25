#include <bits/stdc++.h>
using namespace std;
int main () {
    int even[5], odd [5],n,c=15,i=0,j=0;
    while (c--) {
        cin >> n;
        if (n%2==0) {
            even[i]=n;
            i++;
        }
        else {
            odd [j]=n;
            j++;
        }
        if (i==5) {
            for(int k=0; k<5;k++) {
                cout << "par[" << k << "] = " << even[k] << endl;
            }
            i=0;
        }
        if (j==5) {
            for(int k=0; k<5;k++) {
                cout << "impar[" << k << "] = " << odd[k] << endl;
            }
            j=0;
        }
    }
    if(j!=0) {
        for(int k=0; k<j;k++) {
                cout << "impar[" << k << "] = " << odd[k] << endl;
            }
    }
    if(i!=0) {
        for(int k=0; k<i;k++) {
                cout << "par[" << k << "] = " << even[k] << endl;
            }
    }
    return 0;
}
