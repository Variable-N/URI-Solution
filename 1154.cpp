#include <bits/stdc++.h>
using namespace std;
int main () {
    int age,count=0;
    float sum=0;
    cin >> age;
    while (age>=0) {
        sum+=age;
        count++;
        cin >> age;
    }
    cout << fixed << setprecision(2) << sum/count << endl;

    return 0;
}
