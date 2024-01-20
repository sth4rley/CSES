#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);
    
    vector<int> ud;
    vector<int> ad;

    int u, d, l; cin >> u >> d >> l;

    while(u--) {
        int tmp; cin >> tmp;
        ud.push_back(tmp);
    }

    while(d--) {
        int tmp; cin >>  tmp;
        ad.push_back(tmp);
    }
    
    sort(ud.begin(), ud.end());
    sort(ad.begin(), ad.end());

    int counter = 0;
    int i = 0;
    int j = 0;

    while(i != ad.size() and j != ud.size()) {
        if(abs(ad[i] - ud[j]) <= l){
            counter++;
            i++;
            j++;
        } else {
           if(ad[i]>ud[j]) j++;
           else i++;
        }

    }

    cout << counter << endl;

}
