#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n;
  cin >> n;
  while (n != 1) {
    cout << n << " ";
    if (n % 2) {
      n *= 3;
      n++;
    } else {
      n /= 2;
    }
  }
  cout << n << endl;
}
