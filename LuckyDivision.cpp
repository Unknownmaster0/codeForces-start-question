#include <iostream>
using namespace std;

bool checkLucky(int n)
{
    if (n % 4 == 0 || n % 7 == 0)
    {
        return true;
    }

    while (n)
    {
        int digit = n % 10;
        if (digit != 4 && digit != 7)
        {
            return 0;
        }
        n = n / 10;
    }

    return true;
}
// lucky number -> 1. the number which contains 4 and 7 only.
//                  2. the number which is the divisor of 4 and 7 only.
//                  3. the number whose divisor must satisfy the condition the (1 and 2), then the number is also considered as lucky number.
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        if(n % i == 0){
            if(checkLucky(i))
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }

    if(checkLucky(n)){
        cout<<"YES"<<endl;
        return 0;
    }

    cout<<"NO"<<endl;

    return 0;
}