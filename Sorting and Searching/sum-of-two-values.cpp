#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);
    int s, t, e; cin >> s >> t;
    vector<pair<int,int>> nums;

    for(int i = 0; i<s; ++i) {
        cin >> e;
        nums.push_back({e,i+1});

    }

    sort(nums.begin(), nums.end());

    int i = 0;
    int j = nums.size() - 1;

    while(i < j) {
        int soma = nums[i].first + nums[j].first;
        if(soma == t) {
            cout << nums[i].second << " " << nums[j].second << endl;
            return 0;
        } else {
            if(soma > t) j--; 
            if(soma < t) i++;
        }
    }

    cout << "IMPOSSIBLE" << endl;

}
