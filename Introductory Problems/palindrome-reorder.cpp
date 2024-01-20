#include <bits/stdc++.h>
 
using namespace std;
 
int main(void) {
    ios::sync_with_stdio(0);cin.tie(0);
    
    string str; cin >> str;
    
    int L[27] = {0};
 
    for(auto & c: str) L[c-'A']++;
 
    priority_queue<pair<int,char>> pqi, pqp; 
 
    for (int i = 0; i<27; i++) if(L[i]) {
        if(L[i]%2 == 1) pqi.push({L[i],i+'A'});
        else pqp.push({L[i],i+'A'});
    }
 
    if(pqi.size()>1) {
        cout << "NO SOLUTION" << endl;
        exit(0);
    }
 
    stack<char> st;
  
    while(pqp.size()) {
        for(int i = 0;i<pqp.top().first/2; ++i) cout << pqp.top().second;  
        for(int i = 0;i<pqp.top().first/2; ++i) st.push(pqp.top().second);
        pqp.pop();
    }
    
    if(pqi.size()){
        for(int i = 0; i<pqi.top().first; ++i) cout << pqi.top().second; 
        pqi.pop();
    }
 
    while(st.size()) {
        cout << st.top();
        st.pop();
    }

    cout << endl;
  
}
