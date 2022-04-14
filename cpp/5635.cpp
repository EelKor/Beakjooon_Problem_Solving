/*
문제
어떤 반에 있는 학생들의 생일이 주어졌을 때, 가장 나이가 적은 사람과 가장 많은 사람을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 반에 있는 학생의 수 n이 주어진다. (1 ≤ n ≤ 100)

다음 n개 줄에는 각 학생의 이름과 생일이 "이름 dd mm yyyy"와 같은 형식으로 주어진다. 이름은 그 학생의 이름이며, 최대 15글자로 이루어져 있다. dd mm yyyy는 생일 일, 월, 연도이다. (1990 ≤ yyyy ≤ 2010, 1 ≤ mm ≤ 12, 1 ≤ dd ≤ 31) 주어지는 생일은 올바른 날짜이며, 연, 월 일은 0으로 시작하지 않는다.

이름이 같거나, 생일이 같은 사람은 없다.

출력
첫째 줄에 가장 나이가 적은 사람의 이름, 둘째 줄에 가장 나이가 많은 사람 이름을 출력한다.
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n;
    string name[101];
    int year[101] = {0,};
    int month[101] = {0, };
    int day[101] = {0, };

    int maxyear_idx = 0;
    int minyear_idx = 0;
    int maxmonth_idx = 0;
    int minmonth_idx = 0;
    int maxday_idx = 0;
    int minday_idx = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> name[i] >> day[i] >> month[i] >> year[i];

        if(i == 0) continue;
        maxyear_idx = year[maxyear_idx] <= year[i] ? maxyear_idx:i;
        minyear_idx = year[minyear_idx] < year[i] ? i:minyear_idx;
    }

    maxmonth_idx = maxyear_idx;
    minmonth_idx = minyear_idx;
    for (int i = 0; i < n; i++)
    {
        if(year[i] == year[maxyear_idx])
        {
            maxmonth_idx = month[maxmonth_idx] <= month[i] ? maxmonth_idx : i;
            
        }

        if(year[i] == year[minyear_idx])
        {
            minmonth_idx = month[minmonth_idx] < month[i] ? i : minmonth_idx;
        }
    }

    maxday_idx = maxmonth_idx;
    minday_idx = minmonth_idx;
    for (int i = 0; i < n; i++)
    {   
        
        if(month[i] == month[maxmonth_idx] && year[i] == year[maxyear_idx])
        {
            maxday_idx = day[maxday_idx] < day[i] ? maxday_idx : i;
            
        }
        if(month[i] == month[minmonth_idx] && year[i] == year[minyear_idx])
        {
            minday_idx = day[minday_idx] < day[i] ? i : minday_idx;
        }
    }

    cout << name[minday_idx] << "\n" << name[maxday_idx];
    return 0;
}