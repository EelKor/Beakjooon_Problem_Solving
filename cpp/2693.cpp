#include <iostream>
#include <algorithm>

int main()
{
    int count = 0;
    std::cin >> count;
    
    int** pp_num;
    
    pp_num = (int**)malloc(sizeof(int*) * count);
    for (int i = 0; i < count; i++)
    {
        *(pp_num + i) = (int*)malloc(sizeof(int) * 10);
    }

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            std::cin >> *(*(pp_num + i)+j);
        }
    }

    for (int i = 0; i < count; i++)
    {
        std::sort( *(pp_num+i) , *(pp_num+i)+10);
    }

    for (int i = 0; i < count; i++)
    {
        std::cout << *(*(pp_num+i) + 7) << std::endl;
    }

    
    free(*pp_num);
    free(pp_num);
    
    
    return 0;
}