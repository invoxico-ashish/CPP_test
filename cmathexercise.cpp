#include <iostream>
#include <cmath>
using namespace std;
// exercise for find the area of circle 
int main()
{
    cout << "enter the radius of circle";
    double radius;
    cin >> radius;
    const double pi = 3.14;
    double area = pi * pow(radius, 2);
    cout << "area of circle is :" << area;
    return 0;
}