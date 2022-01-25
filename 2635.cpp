#include <bits/stdc++.h>
using namespace std;
int main () {
    int N,O;
    while(cin >> N) {
        string search1;
        vector<string>searchlist;
        for(int i=0; i<N;i++) {
            cin >> search1;
            searchlist.push_back(search1);
        }
        cin >> O;
        while(O--) {
            int answer=0,length=0;
            cin >> search1;
            for(int i=0; i<N;i++) {

                if(!searchlist[i].find(search1)) {

                    answer++;
                    string temp=searchlist[i];
                    length=max(length,(int)temp.size());
                }
            }
            if(answer==0) cout << -1 << endl;
            else cout << answer << " " << length << endl;
        }
    }
    return 0;
}
