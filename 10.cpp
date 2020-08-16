//Find the Rotation Count in Rotated Sorted array
#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> a = {7, 9, 11, 12, 15};
    int m = a.at(0);
    for (int i = 0; i < a.size(); i++)
    {
        if (i < a.size() - 1)
        {
            if (m > a.at(i + 1))
            {
                m = a.at(i + 1);
            }
        }
    }
    auto it = find(a.begin(), a.end(), m);
    int index;
    if(it != a.end()){
        index = distance(a.begin(), it);
    }

    cout<<index;

    return 0;
}