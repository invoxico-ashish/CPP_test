#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "enter the value of number 1";
    cin >> num1;                           // >> is known as EXTRACTION operator and cin is use to get input
    cout << "enter the value of number 2"; // << is called INSERTION operator and is use with cout (in this codecls)
    cin >> num2;
    cout << "the sum is " << num1 + num2;
};