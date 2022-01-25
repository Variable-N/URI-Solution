#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,e,f,answer,reminder;
    cin >> a >> b;
    if(a<0)
    {
        e=b;
        if(b<0) e=b*-1;
        for(reminder=0; reminder<e; reminder++)
        {
            f=a-reminder;
            if(f%b==0) break;
        }
        answer=f/b;
    }
    else
    {
        answer=a/b;
        reminder=a%b;
    }
    cout << answer << " " << reminder << endl;
    return 0;
}
