#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    double mealCost,tipPercent,taxPercent;
    double totalCost;
    cin >> mealCost;
    cin >> tipPercent;
    cin >> taxPercent;
    totalCost = mealCost + mealCost*tipPercent/100 + mealCost*taxPercent/100;
    cout << "The total meal cost is " << round(totalCost) << " dollars.";
    return 0;
}
/* The round function rounds off the double alue of totalCost to the nearest integer */
