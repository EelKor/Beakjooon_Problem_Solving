#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int* num;

    cin >> n;

    num = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> *(num+i);
    }
    sort(num,num+n);

    for (int i = 0; i < n; i++)
    {
        cout << *(num+i) << "\n";
    }
    return 0;
}