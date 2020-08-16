//implement simple bst

#include <bits/stdc++.h>
using namespace std;

int bst(vector<int> a, int low, int high)
{
    if(high == low){
        return a.at(low);
    }
    int mid = low + high / 2;
    if(a.at(mid + 1) < a.at(mid))
        return a.at(mid+1);
    if(a.at(mid) < a.at(mid-1))
        return a.at(mid);

    if(a.at(high) > a.at(mid))
        return bst(a, 0, mid-1);

    return bst(a, mid+1, a.size() - 1);
}
int main()
{

    vector<int> a = {1, 3, 5, 7};
    int u = bst(a, 0, a.size() - 1);
    cout << u;

    return 0;
}