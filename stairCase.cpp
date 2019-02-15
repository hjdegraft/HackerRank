#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    
    int space, symbols = 1, buildStaircase;

    buildStaircase = n - 1; // start at top and there are n-1 tabs

    for (int i = 0; i < n; i++) {
        space = buildStaircase;

        for (int tabs = 0; tabs < space; tabs++) cout << " " ; // loop one time through at a time and each time space decreases
        for (int hashTags = 0; hashTags < symbols; hashTags++) cout << "#"; // loop one time through at a time and up no symbols

        cout << endl;

        buildStaircase--;
        symbols++;
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}

