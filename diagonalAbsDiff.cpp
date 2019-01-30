#include <bits/stdc++.h>

using namespace std;

// Complete the diagonalDifference function below.
int diagonalDifference(vector<vector<int>> arr) {
    int absDiff = 0;
    int rDiagSum = 0;
    int lDiagSum = 0;

    int row;
    int rcol = 0;
    int lcol = (arr.size() -1);

    for (row = 0; row < arr.size(); row++) {
        rDiagSum = rDiagSum + arr[row][rcol];
        rcol++;
    }

    for (row = 0; row < arr.size(); row++) {
        lDiagSum = lDiagSum + arr[row][lcol];
        lcol--;
    }

    absDiff = abs(rDiagSum-lDiagSum);

    return absDiff;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i].resize(n);

        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
