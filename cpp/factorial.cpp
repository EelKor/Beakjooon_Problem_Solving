#include <iostream>

using namespace std;
int factorial(int n);

int main()
{
    int n;
    cin >> n;

    cout << factorial(n) << endl;
}

int factorial(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}