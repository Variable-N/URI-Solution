#include <bits/stdc++.h>
using namespace std;

void solve (double salary) {
    double tax;
    if (salary <=2000) {
        tax=0;
    }
    else if (salary >2000 && salary <=3000){
        tax=(salary-2000)*0.08;
    }
    else if (salary > 3000 && salary <=4500) {
        tax=(salary-3000)*0.18+1000*0.08;
    }
    else {
        tax=(salary-4500)*0.28+1500*0.18+1000*0.08;
    }
    if (tax==0)
        cout << "Isento" << endl;
    else
        cout << "R$ " << fixed << setprecision(2) << tax <<endl;
}

int main () {
    double s;
    cin>> s;
    solve(s);
    return 0;
}
