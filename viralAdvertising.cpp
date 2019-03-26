#include <bits/stdc++.h>

using namespace std;

// Complete the viralAdvertising function below.
/***********************************************/
/** Looks like this ****************************/
/** Day Shared Liked Cumulative ****************/
/** 1      5     2       2      ****************/
/** 2      6     3       5      ****************/
/** 3      9     4       9      ****************/
/** 4     12     6      15      ****************/
/** 5     18     9      24      ****************/
/***********************************************/

int viralAdvertising(int n) {
    int noPeople = 0, shared = 5, liked = 0;

    for (int i = 1; i <= n; i++) {
        liked = shared/2;
        noPeople = noPeople + liked;

        shared = liked*3;
    }

    return noPeople;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = viralAdvertising(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
