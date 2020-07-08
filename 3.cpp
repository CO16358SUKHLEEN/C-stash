#include <bits/stdc++.h>
using namespace std;
vector<int> reverse(vector<int> &a)          //rotation through reverse algorithm
{
    vector<int> temp;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        temp.push_back(a.at(i));
    }
    return temp;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int d = 2;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < d; i++)
    {
        a.push_back(arr.at(i));
    }
    int k = 0;
    for (int j = d; j < arr.size(); j++)
    {
        b.push_back(arr.at(j));
        k++;
    }
    vector<int> f = reverse(a);
    vector<int> l = reverse(b);
    vector<int> x;
    x.insert(x.end(), f.begin(), f.end());
    x.insert(x.end(), l.begin(), l.end());
    vector<int> j = reverse(x);
    for (int i = 0; i < j.size(); i++)
    {
        cout << j.at(i);
    }
    return 0;
}