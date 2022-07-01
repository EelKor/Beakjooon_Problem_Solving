#include <iostream>
#include <cmath>

using namespace std;

int main()
{   
    double A,B,V;
    double day;

    cin >> A >> B >> V;
    day = (V-B)/(A-B);
    cout << (int)ceil(day) << endl;
    return 0;
}