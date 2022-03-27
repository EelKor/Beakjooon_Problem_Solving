#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> list[1000001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int N,x,y;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> x >> y;
        list[y].push_back(x);
    }

    long long s = 0;
    for (int i = 1; i <= N; i++)
    {
        int size = list[i].size();
        if (size < 2)
            continue;

        sort(list[i].begin(), list[i].end());

        for (int j = 0; j < size; j++)
        {
            if (j == 0)
                s += list[i][j+1] - list[i][j];

            else if (j == size-1)
                s += list[i][j] - list[i][j-1];
            else
                s += min(list[i][j+1]-list[i][j], list[i][j]-list[i][j-1]);

        }
    } 

    cout << s;

    return 0;
        
}