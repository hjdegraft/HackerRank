#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
void leftRotatebyOne(vector<int>, int);
void leftRotate(vector<int>, int);

int main()
{
    string nd_temp;
    getline(cin, nd_temp);

    vector<string> nd = split_string(nd_temp);

    int n = stoi(nd[0]);

    int d = stoi(nd[1]);

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split_string(a_temp_temp);

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }
    
/***************
** Steps 1-3
** 
** 1. Store d elements in a temporary array
** 2. Shift rest of the original array; after d elements, move those
**    values up to the front of the array, leaving elements after d alone
** 3. Store back the temporary array elements to replace the unchanged 
**    elements
*/

    vector<int> temp(d);
    int temp_count = 0;

    for (int index = 0; index < d; index++) {
        temp[index] = a[index];
    }

    for (int j = 0; j < (n-d); j++) {
        a[j] = a[j+d];
    }

    for (int k = (n-d); k < n; k++) {
        a[k] = temp[temp_count];
        temp_count++;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    } 
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
