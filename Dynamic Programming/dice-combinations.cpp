#include <bits/stdc++.h>

using namespace std;

int main(void){
  
  int n; scanf("%d", &n);
  
  int w[6] = {0}; w[0] = 1;

  int pos = 0;
  while(pos<n){
    pos++;
    
    int temp = 0;
    for(int i = 0; i<6; ++i){
      temp += w[i];
      temp %= (int)(1e9+7);
    }    
    
    w[pos%6] = temp;
  }  
    
  //for(int d = 0; d<6; ++d) printf("%d ", w[d]); printf("\n");
  printf("%d\n", w[pos%6]);
}
