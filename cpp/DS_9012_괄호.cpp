#include <iostream>

using namespace std;

int main()
{
    int n;
    int i = 0;
    char str[51] = {'\0', };
    int vpsCount = 0;

    cin >> n;
    while (n--)
    {
        cin >> str;
        vpsCount = 0;
        for (i = 0; str[i] != '\0'; i++)
        {
            if(str[i] == '(' ) vpsCount++;
            else if(str[i] == ')') vpsCount--;    
            else{}

            if(vpsCount < 0) break;
        }
        if (vpsCount == 0) cout << "YES" << endl;
        else               cout << "NO" << endl;
    }
    return 0;
}