#include <bits/stdc++.h>
#include <string>

using namespace std;

int main () {
  int t; // number of test cases
  int index;
  
  cin >> t;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  
  string S;
  
  if ((t >= 1) && (t <= 10)) {
    for (int i = 0; i < t; i++) {
      cin >> S;
      if ((S.length() > = 2) && (S.length() <= 1000)) {
      
        for (index = 0; index < S.length(); index++) { // even indices
          if (index%2 == 0) {
            cout << S[index];
          }
         }
         
         cout << " ";
         
         for (index = 0; index < S.length(); index) { // odd indices
          if (index%2 == 0) {
            cout << S[index];
          }
         }
       }
       
       cout << endl;
     }
    }
    
    return 0;
  }
        
        
