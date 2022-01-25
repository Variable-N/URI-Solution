#include <bits/stdc++.h>
using namespace std;
string solve (int N) {
    string ans="";
    int temp=N/100;
    if(temp==1) ans+="C";
    else if(temp==2) ans+="CC";
    else if(temp==3) ans+="CCC";
    else if(temp==4) ans+="CD";
    else if(temp==5) ans+="D";
    else if(temp==6) ans+="DC";
    else if(temp==7) ans+="DCC";
    else if(temp==8) ans+="DCCC";
    else if(temp==9) ans+="CM";
    temp=(N/10)%10;
    if(temp==1) ans+="X";
    else if(temp==2) ans+="XX";
    else if(temp==3) ans+="XXX";
    else if(temp==4) ans+="XL";
    else if(temp==5) ans+="L";
    else if(temp==6) ans+="LX";
    else if(temp==7) ans+="LXX";
    else if(temp==8) ans+="LXXX";
    else if(temp==9) ans+="XC";
    temp=N%10;
    if(temp==1) ans+="I";
    else if(temp==2) ans+="II";
    else if(temp==3) ans+="III";
    else if(temp==4) ans+="IV";
    else if(temp==5) ans+="V";
    else if(temp==6) ans+="VI";
    else if(temp==7) ans+="VII";
    else if(temp==8) ans+="VIII";
    else if(temp==9) ans+="IX";
    return ans;
}
int main () {
    int input;
    cin >> input;
    string answer = solve(input);
    cout << answer << endl;
    return 0;
}
