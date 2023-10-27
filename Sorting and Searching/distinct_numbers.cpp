#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    ll n; cin >> n;
    set<int> dis;
    while(n--){
        ll tmp; cin >> tmp;
        dis.insert(tmp);
    }
   cout <<  dis.size() << endl;

}
