#include <iostream>
using namespace std;

int main()
{
    int a[5][5];
    int oneRow = -1, oneCol = -1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                oneRow = i;
                oneCol = j;
            }
        }
    }

    int middleRow = 2;
    int middleCol = 2;
    // now check the difference between the row and col of the middle and one.
    int rowDiff = abs(oneRow - middleRow);
    int colDiff = abs(oneCol - middleCol);

    cout << rowDiff + colDiff << endl;

    return 0;
}