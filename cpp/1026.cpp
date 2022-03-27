#include <iostream>
#include <algorithm>

bool desc(int a, int b)
{
    return a>=b;
}

int main()
{
    int count = 0;
    std::cin >> count;

    int A[count];
    int B[count];
    int result = 0;

    for (int i = 0; i < count; i++)
    {
        std::cin >> A[i];
    }
    std::cin.ignore();

    for (int i = 0; i < count; i++)
    {
        std::cin >> B[i];
    }

    std::sort(A, A+count);
    std::sort(B, B+count,std::greater<>());

    for (int i = 0; i < count; i++)
    {
        result += A[i] * B[i];
    }

     std::cout << result << std::endl;

    return 0;
}