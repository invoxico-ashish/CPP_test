#include <iostream>
using namespace std;
int main()
{
    double sale = 95000;
    cout << "the total sale is " << sale << endl;
    const double statTax = (4.0 / 100) * sale;
    cout << "The 4% state tax is " << statTax << endl;
    const double countryTax = (2.0 / 100) * sale;
    cout << "the 2% country tax is " << countryTax << endl;
    const double totalTax = statTax + countryTax;
    cout << "Toatal tax is " << totalTax;
}