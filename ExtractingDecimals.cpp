#include <bits/stdc++.h>

using namespace std;

int totalCost;

void solve (double meal_cost, int tip_percent, int tax_percent) {
  double tip;
  double taxes;
  double tempCost, numAfterDecimal;
  
  tip = (((double)tip_percent*1/100)*meal_cost);
  
  taxes (((double)tax_percent*1/100)*meal_cost);
  
  tempCost = meal_cost+tip+taxes;
  numAfterDecimal = fmod(tempCost,1);
  
  if (numAfterDecimal > .5) {
    totalCost = (int)tempCost + 1;
  } else {
      totalCost = (int)tempCost;
  }
  
  int main () {
  
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    solve(meal_cost, tip_percent, tax_percent);
    
    cout << totalCost << endl;
    
    return 0;
}
