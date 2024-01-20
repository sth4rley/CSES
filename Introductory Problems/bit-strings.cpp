#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n; scanf("%d", &n);

    long long res = 1;

    while(n--) res = (res << 1) % (long long) (1e9+7); 

    printf("%d\n", res);
}
