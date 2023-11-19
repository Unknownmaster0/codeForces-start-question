#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string str;
    cin>>str;
    string ans;

    sort(str.begin(),str.end());
    // remove all the + sign in the str.
    str.erase(remove(str.begin(), str.end(), '+'), str.end());
    // now add the '+' sign after every number.
    for(int i=0; i<str.length(); i++)
    {
        ans.push_back(str[i]);
        if(i < str.length()-1)
            ans.push_back('+');
    }
    cout<<ans<<endl;

    return 0;
}