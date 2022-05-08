#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    int a,b;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b; 
        if((long long)pow(a,b%4+4) % 10 == 0) cout << "10" << endl;
        else cout << (long long)pow(a,b%4+4) % 10 << endl;
    }
    return 0;
}