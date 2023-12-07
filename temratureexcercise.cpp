// (15°C × 9/5) + 32 = 59°F
#include <iostream>
using namespace std;
int main()
{
    cout << "temratur in Celsius  :";
    double temprature;
    cin >> temprature;
    const double T = 1.8;
    const double fahrenheitTemp = (temprature * T) + 32;
    cout << "the temprature in fahrenheit is: " << fahrenheitTemp << " degree fahrenheit ";
};
