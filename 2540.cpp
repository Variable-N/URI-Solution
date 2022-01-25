#include <bits/stdc++.h>
using namespace std;
int main () {
    int N;
    while (cin >> N) {
        int yes=0,voter=N,vote;
        double decision;
        while(N--) {
            cin>> vote;
            if(vote==1) yes++;
        }
        decision=yes/(double)voter;
        double a=((double)voter*2/3.0)/voter;
        cout << ((decision>=a)? "impeachment":"acusacao arquivada" ) << endl;
    }
    return 0;
}
