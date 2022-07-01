#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int m,n;
    cin >> m >> n;

    bool isPrime[1000001];

    for (int i = 0; i <= n; i++)
    {
        isPrime[i] = true;
    }
    

    for (int i = 2; i*i <= n; i++)
    {   
        if(isPrime[i])
        {
            for (int j = i+i; j <= n; j++)
            {
                if(j % i == 0) isPrime[j] = false;
            }
        }
        
    }
    isPrime[1] = false;
    for (int i = m; i <= n; i++)
    {
        if(isPrime[i]) cout << i << "\n";
    }
    return 0;
}