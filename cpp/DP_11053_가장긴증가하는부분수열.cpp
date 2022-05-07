#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()    
{
    int n;
    vector<int> v;
    int dp[1000] = {};
    int a;
    int sum = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }


    for (int i = 0; i < n; i++)
    {
        dp[i] = 1;  // dp 의 기본값은 1이므로 일단 1로 초기화 

        // i는 현재, j는 0부터 i 까지 과거의 기록 탐색  
        for (int j = 0; j < i; j++)
        {
            if (v[i] > v[j])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        // dp 배열에서 가장 큰 수
        sum = max(sum, dp[i]);
    }

    cout << sum << endl;
    return 0;
}