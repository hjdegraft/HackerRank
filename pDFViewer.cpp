#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
int decodeValue (char letter, vector<int> heights);

// Complete the designerPdfViewer function below.
int designerPdfViewer(vector<int> h, string word) {
    int value, compare = 0;
    for (int i = 0; i < word.length(); i++) {
        value = decodeValue(word[i], h); 
        if (value > compare)
            compare = value;
    }

    int area = compare * word.length();

    return area;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string h_temp_temp;
    getline(cin, h_temp_temp);

    vector<string> h_temp = split_string(h_temp_temp);

    vector<int> h(26);

    for (int i = 0; i < 26; i++) {
        int h_item = stoi(h_temp[i]);

        h[i] = h_item;
    }

    string word;
    getline(cin, word);

    int result = designerPdfViewer(h, word);

    fout << result << "\n";

    fout.close();

    return 0;
}

int decodeValue (char letter, vector<int> heights) {
    int value;

    switch (letter) {
        case 'a': value = heights[0];
        break;

        case 'b': value = heights[1];
        break;

        case 'c': value = heights[2];
        break;

        case 'd': value = heights[3];
        break;

        case 'e': value = heights[4];
        break;

        case 'f': value = heights[5];
        break;

        case 'g': value = heights[6];
        break;

        case 'h': value = heights[7];
        break;

        case 'i': value = heights[8];
        break;

        case 'j': value = heights[9];
        break;

        case 'k': value = heights[10];
        break;

        case 'l': value = heights[11];
        break;

        case 'm': value = heights[12];
        break;

        case 'n': value = heights[13];
        break;

        case 'o': value = heights[14];
        break;

        case 'p': value = heights[15];
        break;

        case 'q': value = heights[16];
        break;

        case 'r': value = heights[17];
        break;

        case 's': value = heights[18];
        break;

        case 't': value = heights[19];
        break;

        case 'u': value = heights[20];
        break;

        case 'v': value = heights[21];
        break;

        case 'w': value = heights[22];
        break;

        case 'x': value = heights[23];
        break;

        case 'y': value = heights[24];
        break;

        case 'z': value = heights[25];
        break;
    } // of switch

    return value;
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
