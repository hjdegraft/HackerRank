#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main() {
  int noQueries;
  long phoneNum;
  
  string name, query;
  map <string, long>::iterator itDictionary;
    
  cin >> noEntries;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  
  map <string, long> phoneBook;
  
  if ((noEntries >= 1) && (noEntries <= 10000)) {
        for (int i = 1; i <= noEntries; i++) {
            cin >> name;
            cin >> phoneNum;
            
            phoneBook[name] = phoneNum;
        } // capture input until exceeds noEntries; first input integer
    
        for (auto &it : phoneBook) {
          cin >> query;     
          itDictionary = phoneBook.find(query); // if found, returns an iterator to the element
                
          if (itDictionary != phoneBook.end()) { // if not found, returns map::end()
              cout << itDictionary->first << "=" << itDictionary->second << endl;
          } else {
              cout << "Not found" << endl;
          } 
        } // iterating through the map data structure phoneBook
        
    } // end of if (...) checking successful range of noEntries
  
  return 0;
}
   
