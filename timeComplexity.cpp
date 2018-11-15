#include <iostream>

using namespace std;

int main() {

    int testCases, noTest;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        cin >> noTest;
        bool isPrime = true;
        int factors = 2;

        while ((isPrime) && (factors < noTest)) {
            if ((noTest%factors) == 0) {
                isPrime = false;
            } else 
                factors++;
        }
        if (isPrime == true) {
            cout << "Prime" << endl;
        } else {
            cout << "Not prime" << endl;
        }
            
    }
    return 0;
}

