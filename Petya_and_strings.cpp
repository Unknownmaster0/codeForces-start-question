#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string str1 ;
    string str2;
    cin>>str1>>str2;

    // first convert all the characters of the string to the lower cases.
    transform(str1.begin(),str1.end(),str1.begin(), :: tolower);
    transform(str2.begin(),str2.end(),str2.begin(), :: tolower);

    // if both the strings are equal then print 0.
    if(str1 == str2)
        cout<<0<<endl;
    // if 1st string is greater then second string print 1.
    if(str1 > str2)
        cout<<1<<endl;
    // if the second string is greater then first string print -1.
    if(str2 > str1)
        cout<<-1<<endl;
        
    return 0;
}