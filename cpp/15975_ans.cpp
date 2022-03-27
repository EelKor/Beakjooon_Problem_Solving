#include <iostream>
#include <vector>
#include <algorithm>

bool cmp(std::pair<long long, int>a, std::pair<long long, int>b)
{
    if (a.second == b.second)   return a.first < b.first;
    else    return a.second < b.second;
}


int main()  
{
    int N = 0;
    long long coordinate;
    int color;
    long long result = 0;
    long long future, past;

    std::cin >> N;

    std::vector<std::pair<long long, int>> points;

    for (int i = 0; i < N; i++)
    {
        std::cin >> coordinate >> color;
        points.push_back(std::pair<long long, int>(coordinate, color));
    }

    sort(points.begin(), points.end(), cmp);

    if (points[0].second == points[1].second)
        result += abs(points[1].first - points[0].first);

    if (points[N-1].second == points[N-2].second)   
        result += points[N-1].first - points[N-2].first;

    for (int i = 1; i < N-1; i++)
    {   
        if (points[i].second == points[i-1].second)
            past = abs(points[i].first - points[i-1].first);
        else past = 100001; // impossible value

        if (points[i+1].second == points[i].second)
            future = abs(points[i+1].first - points[i].first);
        else future = 100001;   //impossible value

        if (past == 100001 && future == 100001)
            continue;
        else
            result += std::min(past, future);
    }

    std::cout << result << std::endl;
    
    return 0;
}