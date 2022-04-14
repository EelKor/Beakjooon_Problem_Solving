#include <iostream>
#include <cmath>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main()
{
    int M,N;
    double ans;
    vector<int> result;
    int sum, max;

    cin >> M;
    cin >> N;

    for (int num = M; num < N+1; num++)
    {
        ans = sqrt(num);

        if (ans - trunc(ans) == 0.0) result.push_back(num);
        //if (ans - (int)ans == 0.0) result.push_back(num);
    }

    if (result.size() == 0)
    {
        cout << -1 << endl;
        return 0;
    }
    
    sum = accumulate(result.begin(), result.end(), 0);
    max = *min_element(result.begin(), result.end());

    cout << sum << endl;
    cout << max;
    
    return 0;
}