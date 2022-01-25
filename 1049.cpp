#include <bits/stdc++.h>
using namespace std;
int solve (string cl1, string cl2, string cl3) {
    string z;
    if (cl1[0]=='v'){
        if(cl2[0]=='a') {
            if (cl3[0]=='c') {
                z="aguia";
            }
            else {
                z="pomba";
            }
        }
        else {
            if (cl3[0]=='o') {
                z="homem";
            }
            else {
                z="vaca";
            }
        }
    }
    else {
        if(cl2[0]=='i') {
            if (cl3[2]=='m') {
                z="pulga";
            }
            else {
                z="lagarta";
            }
        }
        else {
            if (cl3[0]=='h') {
                z="sanguessuga";
            }
            else {
                z="minhoca";
            }
        }
    }
    cout << z << endl;
    return 0;
}
int main () {
    string c1,c2,c3,ans;
    cin >> c1 >> c2 >> c3;
    solve(c1,c2,c3);
    return 0;
}
