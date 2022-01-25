#include <bits/stdc++.h>
using namespace std;
int main () {
    float degree;
    while (cin >> degree) {
        if(degree < 90 || degree==360) cout << "Bom Dia!!" << endl;
        else if (degree <180) cout << "Boa Tarde!!" << endl;
        else if (degree <270) cout << "Boa Noite!!" << endl;
        else cout << "De Madrugada!!" << endl;
        int hour,minute,second=0;
        double time;
        if(degree>=270) time = (degree-270)/15.0;
        else time = (degree+90)/15.0;
            hour =(int)time;
            time=(time-hour)*60;
            minute = (int) time;
            time=(time-minute)*60;
            if (time<=59) second = (int) time;
            else {
                minute++;
                if (minute>59) minute=0,hour++;
                if (hour >23) hour =0;
            }
        if(hour<10) cout << 0;
        cout  << hour <<":";
        if(minute<10) cout << 0;
        cout << minute << ":" ;
        if(second<10) cout << 0;
        cout << second << endl;
    }
    return 0;
}

