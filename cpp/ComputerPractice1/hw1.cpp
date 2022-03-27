#include <iostream>

using namespace std;

int main()
{
    bool var1 = true;
    char var2 = 'a';
    int var3 = 2020;
    double var4 = -1234.57575;

    const bool const1 = false;
    const char const2 = 'b';
    const int const3 = 2021;
    const double const4 = -9.87;

    cout << var1 << endl;
    cout << var2 << endl;
    cout << var3 << endl;
    cout << var4 << endl;

    cout << const1 << endl;
    cout << const2 << endl;
    cout << const3 << endl;
    cout << const4 << endl;

    var1 = false;
    var2 = 'c';
    var3 = 2020;
    var4 = 1.23;

    cout << var1 << endl;
    cout << var2 << endl;
    cout << var3 << endl;
    cout << var4 << endl;

    return 0;
}