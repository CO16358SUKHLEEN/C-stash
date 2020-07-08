//pair with a a given sum

#include <bits/stdc++.h>
using namespace std;
vector<int> find(vector<int> &a, int d)
{
    unordered_map<int, int> t;
    for (int i = 0;; i++)
    {
        auto it = t.find(d - a[i]);
        if (it == t.end())
        {
            t[a[i]] = i;
        }
        else
        {
            return vector<int>{i, it->second};
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, 4, 7, 8};
    int d = 5;
    find(arr, d);
    // for(int i = 0; i< arr.size() - 1; i++){
    //     // if(arr[i] + arr[i+1] )
    //     arr.at()
    // }

    return 0;
}