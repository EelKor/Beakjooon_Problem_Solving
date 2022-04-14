#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N, K;
    int tmp = 0;
    int result = 0;
    vector<int> num;

    cin >> N >> K;

    for (int i = 0; i < N; i++)
    {   
        cin >> tmp;
        num.push_back(tmp);
    }

    sort(num.begin(), num.end());

    auto itor = num.end();
    itor--;
    int index = K;

    while (index--)
    {
        result += *itor - (K-index) + 1;
        itor--;
    }

    cout << result << endl;
    
    
    
    return 0;
}