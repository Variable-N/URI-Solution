#include <bits/stdc++.h>
using namespace std;
bool check(int a, int b, int c, char op) {
    bool ans=false;
    if(op=='+') {
        if(a+b==c) ans=true;
    }
    else if (op=='-') {
        if(a-b==c) ans=true;
    }
    else if (op=='*') {
        if(a*b==c) ans=true;
    } else {
        if(a+b!=c && a-b!=c && a*b!=c) ans =true;
    }
    return ans;
}

int main () {
    int T;
    while (cin>>T) {
        int X[T] ,Y[T], Z[T];
        char dummy;
        for (int i=0; i<T  ;i++ ) {
            scanf("%d%d%c%d",&X[i],&Y[i],&dummy,&Z[i]);
        }
        int counter=0;
        string name[50];
        for (int i=0; i<T  ;i++ ) {
            string n;
            int index;
            char op;
            cin >> n >> index >> op;
            bool answer=check(X[index-1],Y[index-1],Z[index-1],op);
            if(!answer) {
                name[counter]=n;
                counter++;
            }
        }
        if (counter==T) cout << "None Shall Pass!" << endl;
        else if (counter==0) cout << "You Shall All Pass!" << endl;
        else {
            sort(name, name+50);
            for(int i=50-counter;i<50;i++) cout << name[i]<< ((i==49)? "\n": " ");
        }
    }
    return 0;
}
