#include <iostream>

using namespace std;

int main()
{
    char **map;
    bool **seen;
    int n;
    
    cin >> n;

    // 동적 할당 부분 
    map = (char**)malloc(sizeof(char*) * n);
    seen = (bool**)malloc(sizeof(bool*) * n);
    for (int i = 0; i < n; i++)
    {
        *(map+i) = (char*)malloc(sizeof(char) * n);
        *(seen+i) = (bool*)malloc(sizeof(bool) * n);
    }

    // 데이터 입력 부분 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> p[i][j];
        }
    }

        
    return 0;
}