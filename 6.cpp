#include <bits/stdc++.h>
using namespace std;

//split the array and add first part to he last

vector<int> split(vector<int> l, int k)
{
    vector<int> b;
    vector<int> u;
    vector<int> h;
    for (int i = 0; i <k; i++)
    {
        b.push_back(l.at(i));
    }
    for(int j = k; j<l.size(); j++){
       u.push_back(l.at(j));
    }

    // for(int i = 0; i<u.size(); i++){
    //     cout<<u.at(i);
    // }
    
    h.insert(h.end(), u.begin(), u.end());
    h.insert(h.end(), b.begin(), b.end());
    return h;

    // return vector<int> {}
}
int main()
{
    vector<int> b = {12, 10, 5, 6, 52, 36};
    int index = 2;
    vector<int> h = split(b, index);
   for(int i = 0; i < h.size(); i++){
       cout<<h.at(i)<<",";
   }
    return 0;
}