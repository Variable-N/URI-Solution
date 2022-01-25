#include <bits/stdc++.h>
using namespace std;
int solve (int input) {
    int line=0,column=0,value;
    int ara [input][input];
    for(int line = 0; line <input;line++) {
        value=line+1;
        bool minLimit=true;
        for (int column=0; column <input; column++) {
            if(minLimit && value>1) {
                ara[line][column]=value;
                value--;
            }
            else {
                minLimit=false;
                ara[line][column]=value;
                value++;
            }

        }
    }

    for(int i=0; i<input; i++) {
        for(int j=0; j<input; j++) {
            //cout <<  fixed << setprecision(3) << ara[i][j];
            printf("%3d",ara[i][j]);
            cout <<((j==input-1)? "":" ");
        }
        cout << endl;
    }
}
int main () {
    int N;
    cin >> N;
    while(N!=0) {
        solve(N);
        cout << endl;
        cin>>N;
    }

    return 0;
}
