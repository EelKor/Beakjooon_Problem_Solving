#include <iostream>

using namespace std;

int main()
{
    int n,m;
    int card[101] = {0, };
    int sum = 0;
    int result = 300000;

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> card[i];
    }
    
    for (int i = 0; card[i] != 0; i++)
    {
        for (int j = 0; card[j] != 0; j++)
        {   
            if(j == i) continue;
            for (int k = 0; card[k] != 0; k++)
            {
                if(k == j || k == i) continue;
                sum = card[i] + card[j] + card[k];
                if(m-sum < 0) continue;
                else result = min(m-sum,result);
            }       
        }      
    }
    cout << m-result << endl;


    return 0;
}