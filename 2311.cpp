#include <bits/stdc++.h>
using namespace std;
int main () {
    int N;
    cin >> N;
    while (N--) {
        string name;
        cin >> name;
        float j1,max,min,sum,level;
        cin >> level >> j1;
        max=j1;
        min=j1;
        sum=j1;
        for(int i=2; i<=7;i++) {
            cin>>j1;
            if(max<j1) max=j1;
            if(min>j1) min=j1;
            sum+=j1;
        }
        sum-=(max+min);
        cout << name << " " << fixed << setprecision(2) << sum*level << endl;
    }
    return 0;
}
