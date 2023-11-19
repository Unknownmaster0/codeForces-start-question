#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // so that they can be divided among the two.
    if (n % 2 == 0 && n > 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}