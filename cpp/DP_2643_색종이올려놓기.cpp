/* 
 * 아이디어
 * 1. 색종이 넓이 를 구한후 넓이가 큰 순서로 정렬
 * 2. 넓이가 가장 큰 색종이를 스택에 넣고 다음 요소의 가로 세로 길이를 비교
 * 3. 조건 1을 만족한다면 스택에 해당 색종이를 넣고 스택 카운트++ 
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compareArea(pair<int,int>a, pair<int,int> b);
bool compareLength(pair<int,int>a, pair<int,int>b);

int main()
{
    int n;
    int a,b;
    int max = 0;
    int count = 0;
    bool isOverlap[101];
    vector<pair<int,int>> v;

    // 배열 초기화  
    for (int i = 0; i < 101; i++)
    {
        isOverlap[i] = false;
    }
    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(), v.end(), compareArea);

    return 0;
}
    

 // a는 현재 원소 b 는 다음원소 , return 이 false 이면 swap
bool compareArea(pair<int,int>a, pair<int,int> b)  
{
    return a.first * a.second > b.first * b.second;
}

// a는 현재, b는 다음, a의 모든 변이 b보다 크면 True
bool compareLength(pair<int,int>a, pair<int,int>b)
{
    if (a.first >= b.first && a.second >= b.second)
    {
        return 1;   
    }
    else
    {
        return a.first >= b.second && a.second >= b.first;
    }
}
