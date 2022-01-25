#include <bits/stdc++.h>
using namespace std;
int main () {
    float avg=0,num;
    int count=0;
    for (int i=1; i<=6;i++) {

        cin>>num;
        if(num>=0) {
            avg+=num;
            count++;
        }
    }
    cout << count << " valores positivos\n" << fixed << setprecision(1) << (avg/count) << endl;
    return 0;
}
