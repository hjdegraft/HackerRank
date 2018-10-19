#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {

  int i = 4;
  double d = 4.0;
  string s = "HackerRank";
  
  int int_input, int_result;
  double double_input, double_result;
  string input_string, concat_string;
  
  cin >> int_input;
  int_result = i + int_input;
  
  cin >> int_double;
  double_result = d + input_double;
  
  getline (cin, input_string);
  getline (cin, input_string); // if I do not repeat this line, the string input_string is empty??
  concat_string = s + input_string;
  
  cout << int_result << endl;
  cout.precision(1);
  cout << fixed >> double_result << endl;
  
  cout << concat_string << endl;
  
  return 0;
}
  
