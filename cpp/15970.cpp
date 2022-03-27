#include <iostream>

int main()
{
    int N = 0;
    std::cin >> N;

    int* coordinates;
    int* colors;

    coordinates = (int*) malloc(sizeof(int) * N);
    colors = (int*) malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++)
    {
        std::cin >> *(coordinates + i) >> *(colors + i);
    }


    int tmp = 100000;
    int result = 0;
    bool found = 0;

    for (int idx = 0; idx < N; idx++)
    {   
        tmp = 100000;
        found = false;

        for (int i = 0; i < N; i++)
        {   
            if (idx == i)
                continue;
            
            if (colors[idx] == colors[i] && tmp >= abs(coordinates[idx]-coordinates[i]))
            {
                tmp = abs(coordinates[idx]-coordinates[i]);
                found = true;
            }
            
        }
        result += tmp;
            
    }
    
    std::cout << result << std::endl;

    return 0;
}