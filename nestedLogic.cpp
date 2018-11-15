#include <iostream> 
 
 using namespace std;

 
int toFine (int dayRet, int monthRet, int yearRet, int dayExp, int monthExp, int yearExp) {
    int typeFine, fine, monthsLate, daysLate;
    
    if (yearRet > yearExp) {
        typeFine = 10000;
    } else if (monthRet > monthExp) {
        typeFine = 500;
        monthsLate = monthRet - monthExp;
        } else if (dayRet > dayExp){
            typeFine = 15;
            daysLate = dayRet - dayExp;
        }

    switch (typeFine) {
        case 10000: fine = typeFine;
            break;
        case 500: fine = typeFine * monthsLate;
            break;
        case 15: fine = typeFine * daysLate;
            break;
        default: fine = 0;
            break;
    }

    return fine;
}

int main() {
    int fine;
    int dayRet, dayExp;
    int monthRet, monthExp;
    int yearRet, yearExp;

    cin >> dayRet;
    cin >> monthRet;
    cin >> yearRet;

    cin >> dayExp;
    cin >> monthExp;
    cin >> yearExp;

    fine = toFine(dayRet, monthRet, yearRet, dayExp, monthExp, yearExp);

    cout << fine;

    return 0;
}
