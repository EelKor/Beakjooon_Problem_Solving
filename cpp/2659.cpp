#include <iostream>
#include <math.h>
#include <algorithm>

int totalnum[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int numberOfCases[6561];
int selects[4] = {
    0,
};
int idxForTotalclock = 0;

void dfs(int cnt)
{
    if (cnt == 4)
    {
        numberOfCases[idxForTotalclock] =
            1000 * selects[0] + 100 * selects[1] + 10 * selects[2] + selects[3];
        idxForTotalclock++;
        return;
    }

    for (int i = 0; i < 9; i++)
    {
        selects[cnt] = totalnum[i];
        dfs(cnt + 1);
    }
}

int Findclocknum(int inputs)
{
    int result = 0;
    int inputnum[4] = {
        0,
    };
    int clocknum = inputs;

    for (int i = 0; i < 4; i++)
    {
        inputnum[i] = inputs % 10;
        inputs /= 10;
    }

    for (int i = 0; i < 4; i++)
    {
        int idx = i;
        result = 0;
        for (int j = 0; j < 4; j++)
        {
            if (idx <= 3)
            {
                result += pow(10, 3 - j) * inputnum[3 - idx];
            }
            else
            {
                idx = 0;
                result += pow(10, 3 - j) * inputnum[3 - idx];
            }
            idx++;
        }

        if (clocknum > result)
        {
            clocknum = result;
        }
        else
        {
            continue;
        }
    }
    return clocknum;
}

int main()
{
    int num[4] = {
        0,
    };
    int totalClocknum[1666] = {
        0,
    };
    
    int result = 0;
    int idxForTotalClocknum = 0;

    for (int i = 0; i < 4; i++)
    {
        std::cin >> num[i];
    }

    dfs(0); // 1~9 숫자들중 4개를 중복을 허용해서 뽑을 경우의 수 구하기

    int duplication = 0;
    for (int i = 0; i < 6561; i++)
    {
        duplication = 0;
        result = Findclocknum(numberOfCases[i]);

        for (int j = 0; j < sizeof(totalClocknum) / sizeof(int); j++)
        {
            if (result == totalClocknum[j])
            {
                duplication++;
            }
            else
            {
                continue;
            }
        }
        if (duplication == 0)
        {
            totalClocknum[idxForTotalClocknum] = result;
            idxForTotalClocknum++;
        }
        else
        {
            continue;
        }
    }
    std::sort(totalClocknum, totalClocknum + (sizeof(totalClocknum) / sizeof(int)) - 1);
    for (int i = 0; i < sizeof(totalClocknum) / sizeof(int); i++)
    {

        if (Findclocknum(1000 * num[0] + 100 * num[1] + 10 * num[2] + num[3]) == totalClocknum[i])
        {
            std::cout << i + 1 << std::endl;
            break;
        }
        else
        {
            continue;
        }
    }
    return 0;
}
