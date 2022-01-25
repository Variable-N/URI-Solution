#include <bits/stdc++.h>
using namespace std;
int main () {
    string input;
    cin >> input;
    int counter=0;
    for(int i=0; i < input.length(); i++) {
        if(input[i]=='1') counter++;
    }
    cout << input << ((counter%2==0)? '0':'1') << endl;
    return 0;
}
