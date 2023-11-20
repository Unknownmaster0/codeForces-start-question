#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string check = "hello";
    int count = 0;
    int i = 0, j = 0;
    while (i < s.length())
    {
        if (s[i] == check[j])
        {
            j++;
            count++;
        }
        i++;
    }

    // it means that we found all the five letters of the "hello".
    if (count == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

// #include<iostream>

// int main(){
//     std::string word, hello="hello";
//     std::cin>>word;
//     int j=0, pas=0;
//     for(int i=0; i<word.length();i++){
//         if(word[i]==hello[j]){
//             j++;
//             pas++;
//         }
//     }
//     if(pas==5){
//         std::cout<<"YES";
//     }else{
//         std::cout<<"NO";
//     }
//     return 0;
// }