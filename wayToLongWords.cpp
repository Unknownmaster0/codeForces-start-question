#include <iostream>
#include <vector>
using namespace std;

void doSplet(vector<string> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].size() > 10)
        {
            int size = v[i].size();
            // but we need the count of letters between the first and the last character.
            // so, size = size - 2
            size -= 2;
            cout << v[i][0] << size << v[i][size + 1] << endl;
        }
        else if (v[i].size() <= 10)
        {
            cout << v[i] << endl;
        }
    }
}
/*4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis
*/

int main()
{
    int n;
    cin >> n;
    vector<string> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];
    doSplet(v);
    return 0;
}