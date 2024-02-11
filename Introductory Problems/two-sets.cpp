#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    uint64_t sum = n * (n + 1) / 2;
    if (sum % 2 == 0) {
        cout << "YES" << endl;
        
        vector<int> conjunto1, conjunto2;
        uint64_t sum1 = 0, sum2 = 0;
        
        for (int i = n; i >= 1; i--) {
            if (sum1 <= sum2) {
                sum1 += i;
                conjunto1.push_back(i);
            } else {
                sum2 += i;
                conjunto2.push_back(i);
            }
        }
        
        cout << conjunto1.size() << endl;
        for (int num : conjunto1)
            cout << num << " ";
        cout << endl;
        
        cout << conjunto2.size() << endl;
        for (int num : conjunto2)
            cout << num << " ";
        cout << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
