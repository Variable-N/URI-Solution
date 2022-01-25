#include <bits/stdc++.h>
using namespace std;
int main () {
    string time;
    int max;
    while(cin >> time) {
        if(time[0]-48<7) {
            max=0;
        }
        else if(time[0]-48==7) {
            max=((time[2]-48)*10)+(time[3]-48);
        }
        else if(time[0]-48==8) {
            max=((time[2]-48)*10)+(time[3]-48)+60;
        }
        else {
            max=120;
        }
        cout << "Atraso maximo: " << max << endl;
    }

    return 0;
}
