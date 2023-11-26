#include<iostream>
#include<map>

using namespace std;

/*concept -> Understanding the question in itself is big deal for this question 
            example -> n = 4
                        2 3 4 1
                        
what do mean by this given array? -> This array represnt kis friend ne kisko gift diya
                                i.e = 1st friend ne 2nd friend ko diya
                                    2nd friend ne 3rd friend ko diya
                                    3rd friend ne 4th friend ko diya
                                    4th friend ne 1st friend ko diya

we should return the array in which -> kis friend ne kisse gift receive ke wo output hona chaiye.
                                    1st friend receives gift from -> 4th friend.
                                    2nd friend receives gift from -> 1st friend
                                    3rd friend receives gift from -> 2nd friend.
                                    4th friend receives gift from -> 3rd friend.
*/

int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0; i<n; i++)
        cin>>arr[i];

    map<int,int> gift;
    // now make the pair that which friend receives gift from which friend.
    for(int i = 0; i<n; i++)
        gift[arr[i]] = i+1;

    // now printing the gift given by which friend.
    for(int i = 1; i<=n; i++)
        cout<<gift[i]<<" ";
    cout<<endl;

    return 0;
}