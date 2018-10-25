#include <bits/stdc++.h>

using namespace;

vector<string> split_string(string);


int main() {

  int sizeOfArray;
  
  cin >> sizeOfArray;
  cin.ignore(numeric_limits<streamsize>::max(), '/n');
  
  string inputOfInts;
  getline(cin, inputOfInts);
  
  vector<string> tmpArraySplitStr = split_string(inputOfInts); // the original input lists integers separated by ws
  vector<int> arrayOfInts (noIndices); // before reversing; just the array of integers with no ws
  
  for (int i = 0; i < sizeOfArray; i++)
    int arrayIndex = stoi(tmpArraySplitStr); // stoi converts a string into an integer and returns that converted int
    
    arrayOfInts[i] = arrayIndex;
  }
  
  for (int i = (sizeOfArray - 1); i >= 0; i--) { /*
                                                 ** using the counter as the index for the array and therefore 
                                                 ** last item is one less than size of Array
                                                 */
    cout << arrayOfInts[i] << " ";
  }
  
  cout << enld;
  
  return 0;
}

vector<string> split_string (string input_string) {
  string::iterator new_end = unique (input_string.begin(), input_string.end(),[] (const char &x, const char &y) {
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
