#include <bits/stdc++.h>

using namespace std;

int main(void){
   string str; cin >> str; 
   int m = 1;
   int counter = 1;
   auto prev = 'Z';

   for(auto& current: str){
        if(current != prev){
            m = max(m,counter);
            counter = 1;
            prev = current;
        } else {
            counter++; 
            m = max(m,counter);
        }
        
   } 

   cout << m << endl;
}
