#include <iostream>
using namespace std;

int main()
{
    int animals[10][10] = {};

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            animals[i][j] = i * j;
        }
    }

    for (int k = 1; k <= 10; k++)
    {
        for (int l = 1; l <= 10; l++)
        {
            cout << animals[k][l] << ", " << flush;
        }
        cout << endl;
    }

    return 0;
}
