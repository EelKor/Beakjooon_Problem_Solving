#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    int apt[7];
    int **pp_mat = (int **)malloc(sizeof(int*) *  N);

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        *(pp_mat + i) = (int*)malloc(sizeof(int*) * 7);
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cin >> *(*(pp_mat + i) + j);
        }
        
    }

    cout << endl;
    cout << sizeof(*pp_mat)/sizeof(int*) << sizeof(pp_mat) <<endl;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cout << *(*(pp_mat + i) + j) << " ";
        }
        cout << endl;
    }
    
    
    

    return 0;
}