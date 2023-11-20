#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> input(n);
    int totalSum = 0, nCoins = 0;
    for (int i = 0; i < n; i++){
        cin >> input[i];
        totalSum += input[i];
    }

    sort(input.begin(),input.end());
    // variable to store the sum of the first twin.
    int sum1 = 0, halfSum = totalSum/2;
    for(int i = n-1; i>=0; i--){
        sum1 += input[i];
        nCoins++;
        if(sum1 > halfSum)
            break;
    }

    cout << nCoins << endl;

    return 0;
}