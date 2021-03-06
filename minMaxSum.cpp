#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the miniMaxSum function below.
void miniMaxSum(vector<int> arr) {
    long minSum = 0, maxSum = 0, sum = 0;
    vector<int> newSum(arr.size());
    int count = 0;

    while (count != arr.size()) {
        for (int i = 0; i < arr.size(); i++) {
            sum = sum + arr[i];
        }
        
        newSum[count] = sum - arr[count];

        sum = 0;
        count++;
    }

    minSum = newSum[0];
    for (int j=1;j<newSum.size();j++){
        if (minSum > newSum[j]) {
            if (maxSum < minSum)
                maxSum = minSum;
            minSum = newSum[j];
        } else {
            if (maxSum < newSum[j])
                maxSum = newSum[j];
        }
    }

    cout << minSum << " " << maxSum;
}

int main()
{
    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    miniMaxSum(arr);

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
