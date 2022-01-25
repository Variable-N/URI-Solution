#include <bits/stdc++.h>
using namespace std;
int main () {
    int month,days;
    int yeardays[13]= {0,31,29,31,30,31,30,31,31,30,31,30,25};
    while (cin >> month >> days) {
        int ans=0;
        for(int i=month; i<=12;i++) {
            if(i==month) ans+=(yeardays[month]-days);
            else ans+=yeardays[i];
        }
        if(ans<0) cout << "Ja passou!" << endl;
        else if (ans==0) cout << "E natal!" << endl;
        else if (ans==1) cout << "E vespera de natal!" << endl;
        else cout << "Faltam "<< ans <<" dias para o natal!" << endl;
    }
    return 0;
}
