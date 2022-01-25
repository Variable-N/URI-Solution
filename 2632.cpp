#include <bits/stdc++.h>
using namespace std;
short radius (string dmg,int level) {
    short R;
    if(dmg[0]=='f') {
        if(level==1) R=20;
        else if (level==2) R=30;
        else R=50;
    }
    else if (dmg[0]=='w') {
        if(level==1) R=10;
        else if (level==2) R=25;
        else R=40;
    }
    else if (dmg[0]=='e') {
        if(level==1) R=25;
        else if (level==2) R=55;
        else R=70;
    }
    else {
        if(level==1) R=18;
        else if (level==2) R=38;
        else R=60;
    }
    return R;
}

short damage (string dmg) {
    short D;
    if(dmg[0]=='f') D=200;
    else if (dmg[0]=='w') D=300;
    else if (dmg[0]=='e') D=400;
    else D=100;

    return D;
}
{
//sqrt(pow(x2-x1,2)+pow(y2-y1,2);{
void solve() {
    short w,h,x0,y0,level,castx,casty,answer;
    string dmg;
    cin >> w >> h >> x0 >> y0 >> dmg >> level >> castx >> casty;
    short r=radius(dmg,level),minindex; //radius
    bool intercept=0;
    short x[4]={x0,x0,x0+w,x0+w};
    short y[4]={y0,y0+h,y0,y0+h};
    float distance,mindistance=0;
    if(castx>=x0 && castx<=x0+w && casty>=y0 && casty<=y0+h) intercept=1;
    else {
        for(int i=0; i<4;i++) {
            distance=sqrt(pow(castx -x[i],2)+pow(casty-y[i],2));
            if(distance<mindistance ||i==0) {
                mindistance=distance;
                minindex=i;
            }
        }
        if(mindistance<=r) {
            intercept=1;
        }
        else {
            short xhalf,yhalf;
            if(minindex==0) {
                xhalf=x[0]+(w/2)+1;
                yhalf=y[0]+(h/2)+1;
                for(int i=x[minindex]; i<=xhalf; i++) {
                    distance=sqrt(pow(castx-i,2)+pow(casty-y[0],2));
                    if(distance<=r) {
                        intercept=1;
                        break;
                    }
                }
                for(int i=y[minindex]; i<=yhalf; i++) {
                    distance=sqrt(pow(castx-x[0],2)+pow(casty-i,2));
                    if(distance<=r) {
                        intercept=1;
                        break;
                    }
                }

            }
            else if (minindex==1) {
                xhalf=x[1]+(w/2)+1;
                yhalf=y[1]-(h/2)-1;

                for(int i=x[minindex]; i<=xhalf; i++) {
                    distance=sqrt(pow(castx-i,2)+pow(casty-y[minindex],2));
                    if(distance<=r) {
                        intercept=1;
                        break;
                    }
                }

                for(int i=y[minindex]; i>=yhalf; i--) {
                    distance=sqrt(pow(castx-x[minindex],2)+pow(casty-i,2));
                    if(distance<=r) {
                        intercept=1;
                        break;
                    }
                }
            }
            else if (minindex==2) {
                xhalf=x[2]-(w/2)-1;
                yhalf=y[2]+(h/2)+1;

                for(int i=x[minindex]; i>=xhalf; i--) {
                    distance=sqrt(pow(castx-i,2)+pow(casty-y[minindex],2));
                    if(distance<=r) {
                        intercept=1;
                        break;
                    }
                }

                for(int i=y[minindex]; i<=yhalf; i++) {
                    distance=sqrt(pow(castx-x[minindex],2)+pow(casty-i,2));
                    if(distance<=r) {
                        intercept=1;
                        break;
                    }
                }
            }
            else {
                xhalf=x[3]-(w/2)-1;
                yhalf=y[3]-(h/2)-1;

                for(int i=x[minindex]; i>=xhalf; i--) {
                    distance=sqrt(pow(castx-i,2)+pow(casty-y[minindex],2));
                    if(distance<=r) {
                        intercept=1;
                        break;
                    }
                }

                for(int i=y[minindex]; i>=yhalf; i--) {
                    distance=sqrt(pow(castx-x[minindex],2)+pow(casty-i,2));
                    if(distance<=r) {
                        intercept=1;
                        break;
                    }
                }
            }
        }
    }
    short ans;
    if (intercept) ans=damage(dmg);      //damage
    else ans = 0;
    cout << ans << endl;


}

int main () {
    short T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}
