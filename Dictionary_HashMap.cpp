#include <map>
#include <string>
#include <cmath>
#include <cstudio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace;

int main() {
  int noQueries, phoneNum;
  std::string name;
  
  cin >> noQueries;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  
  std::map <string, long> phoneBook;
  
  if ((noQueries >= 1) && (noQueries <= 100000)) {
    cin >> name;
    cin >> phoneNum;
    
    phoneBook[name] = phoneNum;
    
  
  
