#include <bits/stdc++.h>
using namespace std;
bool solve(int t1,int t2,int t3) {
    bool happy = true;
    if(t1>t2 && t2<=t3) happy=true;
    else if(t1<t2 && t2>=t3) happy=false;
    else if(t1<t2 && t2<t3 && (t2-t1)>(t3-t2))happy=false;
    else if(t1<t2 && t2<t3 && (t2-t1)<=(t3-t2))happy=true;
    else if(t1>t2 && t2>t3 && (t1-t2)>(t2-t3))happy=true;
    else if(t1>t2 && t2>t3 && (t1-t2)<=(t2-t3))happy=false;
    else if(t1==t2){
        if(t2<t3)happy=true;
        else happy=false;
    }
    return happy;
}

int main () {
    int a,b,c;
    cin >> a >> b >> c;
    bool ans=solve(a,b,c);
    cout << ((ans)? ":)" : ":(") << endl;
    return 0;
}
