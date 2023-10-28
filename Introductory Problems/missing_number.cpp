#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    ll n; cin >> n;
    ll s = 0;
    for(int i = 1; i<=n; i++)  s+=i;

    ll r = 0; 
    while(--n){
        int tmp; cin >> tmp;
        r+=tmp;
    }

    cout << s - r << endl;
    
}
