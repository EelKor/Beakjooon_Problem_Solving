#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp_length(pair<string,int> a, pair<string, int> b)
{   
    if(a.second == b.second)
    {
        for(int i = 0; i < a.first.length(); i++)
        {
            if(a.first[i] == b.first[i]) continue;
            else return a.first[i] < b.first[i];
        }
        return 0;
    }

    else return a.second < b.second;
}

// 중복 단어 있으면 하나만 출력
int main()
{
    int n;
    vector< pair<string,int> > v;
    string tmp;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        getline(cin, tmp);
        v.push_back(make_pair(tmp,tmp.length()));
    }

/* 출력 새로운 방법
    for(auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it;
    }
*/
    sort(v.begin(), v.end(), comp_length);

    // unique(v.begin(),v.end()) 
    // -> v 벡터의 중복원소를 쓰레기 값으로 이동, 그후 쓰레기 값 위치 반환 
    
    v.erase(unique(v.begin(), v.end()), v.end());
    for(auto& elem : v)
    {
        cout << elem.first << "\n";
    }

    return 0;
}