// problem link -> https://codeforces.com/problemset/problem/118/A
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string str;
    string ans;
    cin>>str;

    // first convert all the characters to the lower cases.
    // tranform is the utility function defined in the header file <algorithm> which convert the string to upper and lower case.
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    // then remove all the vowels.
    for(int i = 0; i<str.length();)
    {
        char ch = str[i];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y'){
            str.erase(i,1);
            continue;
        }
        else    
            i++;
    }
    // cout<<"string after erasing the vowels -> "<<str<<endl;

    // now we left with only consonents in our string.
    // then finally add '.' before the consonents.
    for(int i = 0 ;i<str.length(); i++)
    {
        ans.push_back('.');
        ans.push_back(str[i]);
    }
    cout<<ans<<endl;

    return 0;
}