#include <bits/stdc++.h>
using namespace std;
int main (){
    int response=1,in=0,gr=0,draw=0,match=0;
    while (response !=2) {
        int igoal,ggoal;
        cin >> igoal >> ggoal ;
        match++;
        if(igoal==ggoal) {
            draw++;
        }
        else if(igoal>ggoal) {
            in++;
        }
        else {
            gr++;
        }
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> response ;
    }
    cout << match << " grenais\nInter:" << in << "\nGremio:" << gr << "\nEmpates:" << draw<< endl;
    if (in==gr){
        cout << "Nao houve vencedor" << endl;
    }
    else {
        cout << ((in>gr)? "Inter venceu mais":"Gremio venceu mais")<< endl;
    }
    return 0;
}
