#include <bits/stdc++.h>
#include <iostream>
#include <fstream>

using namespace std;

int factorial(int n) {
    
    int result;
    
    if (n <= 1) {
        result = 1;
    } else {
        result = n*factorial(n-1);
    }    
        
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
    
    int n, result;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    if ((n >= 2) && (n <= 12)) {
        result = factorial(n);
    } // end of range check
    
    fout << result << "\n";

    fout.close();

    return 0;
}
