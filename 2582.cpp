#include <bits/stdc++.h>
using namespace std;
void display(int a) {
    if(a==0) cout << "PROXYCITY" << endl;
    else if(a==1) cout << "P.Y.N.G." << endl;
    else if(a==2) cout << "DNSUEY!" << endl;
    else if(a==3) cout << "SERVERS" << endl;
    else if(a==4) cout << "HOST!" << endl;
    else if(a==5) cout << "CRIPTONIZE" << endl;
    else if(a==6) cout << "OFFLINE DAY" << endl;
    else if(a==7) cout << "SALT" << endl;
    else if(a==8) cout << "ANSWER!" << endl;
    else if(a==9) cout << "RAR?" << endl;
    else if(a==10) cout << "WIFI ANTENNAS" << endl;

}

int main () {
    int N;
    cin >> N;
    while(N--) {
        int a,b;
        cin >> a >> b;
        display(a+b);
    }
    return 0;
}
