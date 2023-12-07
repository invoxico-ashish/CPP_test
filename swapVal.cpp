#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = 2;
    int temp = a;
    a = b;
    b = temp;
    // cout << b;

    int x = 10;
    int y = x++;
    int z = ++x;
    cout << x;
}