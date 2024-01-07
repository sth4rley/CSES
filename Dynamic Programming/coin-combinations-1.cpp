#include <bits/stdc++.h>

using namespace std;

int main(void){

    int q, n; cin >> q >> n;
    vector<int> coins;

    while(q--){
        int c; cin >> c;
        coins.push_back(c);
    }

    int dp[n+1] = {0};
    
    for(auto& x: coins) if(x<=n) dp[x]++;
    
    for(int i = 0; i<=n; ++i){
        for(auto &x: coins)
            if(i-x>=0) {
                dp[i] += dp[i-x];
                dp[i] %= (int)(1e9+7);
            }
    }

    cout << dp[n] << endl;

}
