#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n;
    int max1s = 1;
    int binaryArray[500000]; 
    int it;
    
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

   if ((n >= 1) && (n <= 1000000)) {
        int remainder;
    
        for (it = 0; n > 0; it++) {
            binaryArray[it] = n%2;
            n = n/2;
        } 
  
        for (it = it -1; it > 0; it--) {
            if ((binaryArray[it] == 1) && (binaryArray[it-1] == 1)) {
                max1s++;
            } 
        }
   } // end of range check for input integer
    
    cout << max1s << endl;
    
    return 0;
}
