#include <bits/stdc++.h>
using namespace std;

int dayextractor (string dayline) {
    int day;
    if(dayline.length()==6) {
        day= dayline[4]*10+dayline[5];
    }
    else {
        day=dayline[4];
    }
    return day;
}
int hourextractor (string hourline) {
    int hour = hourline[0]*10+hourline[1];
    return hour;
}
int minuteextractor (string minuteline) {
    int minute = minuteline[5]*10+minuteline[6];
    return minute;
}
int secondextractor (string secondline) {
    int second = secondline[10]*10+secondline[11];
    return second;
}
int main () {
    string id, it, fd,ft;
    cin >> id >> it >> fd >> ft;
    int day= dayextractor(fd)-dayextractor(id),ih,im,is,fh,fm,fs;
    ih=hourextractor(it);
    fh=hourextractor(ft);
    im=minuteextractor(it);
    fm=minuteextractor(ft);
    is=secondextractor(it);
    fs=secondextractor(ft);
    if(ih>fh) {
        fh=fh+24-ih;
        day--;
    }
    else {
        fh=fh-ih;
    }
    if(im>fm) {
        fm=fm+60-im;
        fh--;
        if (fh<0) {
            fh+=24;
            day--;
        }
    }
    else {
        fm=fm-im;
    }
    if(is>fs) {
        fs=fs+60-is;
        fm--;
        if(fm<0) {
            fm+=60;
            fh--;
            if (fh<0) {
                fh+=24;
                day--;
            }
        }
    }
    else {
        fs=fs-is;
    }
    cout << day << " dia(s)\n" << fh << " hora(s)\n" << fm << " minuto(s)\n" << fs << " segundo(s)\n" << endl;
    return 0;
}
