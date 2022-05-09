#include <iostream>

using namespace std;

int main()
{
    long n;
    long numEnd[200000];
    int lay = 1;

    cin >> n;
    numEnd[0] = 1;
    if(n == 1)
    {
        cout << "1" << endl;
        return 0;
    }

    while (1)
    {
        numEnd[lay] = 6*lay+numEnd[lay-1];
        if(numEnd[lay-1] < n && numEnd[lay] >= n)
        {
            cout << lay+1 << endl;
            break;
        } 
        lay++;
    }
    return 0;
}