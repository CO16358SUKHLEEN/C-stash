//Find a rotation with maximum hamming distance

#include <bits/stdc++.h>
using namespace std;

vector<int> rot(vector<int> a, int *p)
{
    vector<int> x;
    vector<int> temp1;
    vector<int> temp2;
    for (int i = 0; i <= *p; i++)
    {
        temp1.push_back(a.at(i));
    }
    for (int j = *p + 1; j < a.size(); j++)
    {
        temp2.push_back(a.at(j));
    }
    x.insert(x.end(), temp2.begin(), temp2.end());
    x.insert(x.end(), temp1.begin(), temp1.end());
    return x;
}
int main()
{
    vector<int> a = {1, 4, 1};
    vector<int> p;
    int count = 0;
    int j = 0;
    vector<int> l = a;
    for (int i = 0; i < a.size(); i++)
    {
        l = rot(l, &j);
        for (int i = 0; i < a.size(); i++)
        {
            if (a.at(i) != l.at(i))
            {
                count++;
            }
        }
        p.push_back(count);
        // cout << count << "..."
        count = 0;
    }

    int max = p.at(0);
    for (int i = 0; i < p.size() - 1; i++)
    {
        if (p.at(i + 1) > p.at(i))
        {
            max = p.at(i + 1);
        }
    }
    // cout << max;

    auto it = find(p.begin(),
                   p.end(), max);
    vector<int> result;
    if (it != p.end())
    {
        int index = distance(p.begin(),
                             it);
        result = rot(a, &index);
        // cout << index << endl;
    }

    for (int i = 0; i< result.size(); i++){
       cout<<result.at(i);
    }

        return 0;

    //141
    //411
    //114
}