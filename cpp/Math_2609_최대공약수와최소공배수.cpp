#include <iostream>

using namespace std;

int main()
{
    int A,B,A0,B0;
    int gcd, lcm;

    cin >> A >> B;
    A0 = A; B0 = B;

    while(1)
    {
        if(A-B > 0) A = A-B;
        else if(A-B < 0) B = B-A;
        else if( A - B == 0) break;
        
        //cout << A << "," << B << "\n";
    }

    gcd = A;
    lcm = A0*B0 / gcd;

    cout << gcd << "\n";
    cout << lcm << "\n";

    return 0;
}