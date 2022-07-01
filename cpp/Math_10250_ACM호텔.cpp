#include <iostream>

using namespace std;

int main()
{
    int T,H,W,N;
    int x,y;
    unsigned char room[3] = {0, };

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> H >> W >> N;
        x = N / H;
        y = N % H;
        
        if(y != 0)
        {
            room[0] = y;
            room[1] = (x+1) / 10;
            room[2] = (x+1) % 10;

            cout << room[0]*100 + room[1]*10 + room[2] << "\n";
        }

        else
        {
            room[0] = H;
            room[1] = x / 10;
            room[2] = x % 10;

            cout << room[0]*100 + room[1]*10 + room[2] << "\n";
        }

    }
    
    return 0;
}