#include <bits/stdc++.h>

using namespace std;

// Complete the utopianTree function below.
int utopianTree(int n) {
    int height = 0, lifeCycle = 0;

    while (lifeCycle <= n) {
        if ((lifeCycle%2) == 0) {
            height = height + 1;
        } else if ((lifeCycle%2) != 0) {
            height = height * 2;
        }
        lifeCycle++;
    }

    return height;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = utopianTree(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
