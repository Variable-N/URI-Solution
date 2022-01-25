#include <bits/stdc++.h>
using namespace std;
int solve (int input) {
    int line=0,column=0,value,half;
    int ara [input][input];
    if(input%2==0) half = input/2;
    else half = input/2+1;
    for (line =0; line <input; line++) {
        value=0;
        bool limitcheck = true;
        int limit;
        if(line<half) limit = line+1;
        else {
            limit=input-line;
        }
        for (column = 0; column <input; column++) {
            int collimit=input-column;
            if(value <limit && limitcheck){
                value++;
                ara [line][column]=value;
            }
            else {
                if(value > collimit ) {
                    value--;
                    limitcheck=false;
                }
                ara [line][column]=value;
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
