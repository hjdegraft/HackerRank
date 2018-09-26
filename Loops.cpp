#include <bits/stdc++.h>

using namespace std;

int main () {
  int n, i, result;
  
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  
  if ((n >= 2) && (n <= 20)) {
    for (i = 1; i <= 10; i++) {
      result = n*i;
      
      cout << n << " x " << i << " = " << result << endl;
     }
   }
