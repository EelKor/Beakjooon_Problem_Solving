#include <iostream>

using namespace std;

int main()
{
    bool isnotPrime[1001];
    int num[1001] = {0,};
    int count = 0;
    int n;

    cin >> n;
    for (int i = 0; i < 1000; i++)
    {
        isnotPrime[i] = false;
    }

    isnotPrime[1] = true;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    for (int i = 2; i <= 1000; i++)
    {   
        if(isnotPrime[i]) continue;
        for (int j = 2; j <= 1000; j++)
        {   
            if(i*j > 1000) continue;
            isnotPrime[i*j] = true;
        }     
    }
    
    for (int i = 0; i < n; i++)
    {
        if (!isnotPrime[num[i]]) count++;
    }
    cout << count << endl;
    

    return 0;
}