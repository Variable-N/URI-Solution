#include <bits/stdc++.h>
using namespace std;
int main () {
    short N, a,c=0,r=0,s=0;
    float total=0;
    char animal;
    cin >> N;
    for (int i=1; i<=N; i++) {
        cin >> a >> animal;
        total+=a;
        if(animal =='C') {
            c+=a;
        }
        else if(animal =='R') {
            r+=a;
        }
        else {
            s+=a;
        }
    }
    cout << "Total: " << total << " cobaias"<< endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r<< endl;
    cout << "Total de sapos: " << s<< endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << c/total*100 << " %"<< endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << r/total*100 << " %"<< endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << s/total*100 << " %"<< endl;
    return 0;
}
