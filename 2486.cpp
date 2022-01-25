#include <bits/stdc++.h>
using namespace std;

int vitamin (int x, string food) {
    int vmg;
    if(food=="suco de laranja") vmg=120;
    else if(food=="morango fresco") vmg=85 ;
    else if(food=="mamao") vmg=85 ;
    else if(food=="goiaba vermelha") vmg=70 ;
    else if(food=="manga") vmg=56 ;
    else if(food=="laranja") vmg=50 ;
    else vmg=34 ;
    return (vmg*x);
}

int main () {
    int T;
    cin >> T;
    while (T!=0) {
        int vitsum=0;
        while(T--) {
            int x;
            cin >> x;
            cin.ignore();
            string food;
            getline(cin,food);
            vitsum+=vitamin(x,food);
        }
        if(vitsum>130) cout << "Menos " << vitsum-130 << " mg" << endl;
        else if (vitsum<110) cout << "Mais " << 110-vitsum << " mg" << endl;
        else cout << vitsum << " mg" << endl;
        cin>>T;
    }

}
