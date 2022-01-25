#include <bits/stdc++.h>
using namespace std;
int main()
{
    double salary, newsalary;
    int rate;
    cin >> salary;
    if ( salary <=400.00) {
        newsalary = salary+(salary*0.15);
        rate=15;
    }
    else if ( salary >400.00 && salary <=800.00) {
        newsalary = salary+(salary*0.12);
        rate=12;
    }
    else if ( salary >800.00 && salary <=1200.00) {
        newsalary = salary+(salary*0.1);
        rate=10;
    }
    else if ( salary >1200.00 && salary <=2000.00) {
        newsalary = salary+(salary*0.07);
        rate=7;
    }
    else {
        newsalary = salary+(salary*0.04);
        rate=4;
    }
    cout << "Novo salario: " << fixed << setprecision(1) << newsalary << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(1) << newsalary-salary << endl;
    cout << "Em percentual: " << rate << " %" << endl;
}

