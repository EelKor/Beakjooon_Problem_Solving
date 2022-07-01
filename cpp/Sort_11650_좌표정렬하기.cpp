#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int,int>a, pair<int,int>b)
{
    if (a.first <= b.first)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int main()
{
    int n,a,b;
    vector<pair<int,int>> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.push_back(pair<int,int>(a,b));
    }

    sort(v.begin(), v.end());

    for (auto itor = v.begin(); itor != v.end(); itor++)
    {
        cout << itor->first << " " << itor->second << "\n";
    }
    return 0;
}