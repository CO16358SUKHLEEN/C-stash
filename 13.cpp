//Reversal algorithm for right rotation of an array

#include <bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> a, int k, int size)
{
    vector<int> temp;
     for(int j = size - k + 1; j <= size; j++){
        temp.push_back(a.at(j));
    }
    for(int i = 0; i<= size - k; i++){
        temp.push_back(a.at(i));
    }
   
    return temp;
}
int main()
{

    vector<int> a = {121, 232, 33, 43 ,5};
    int k = 3;
    vector<int> b = reverse(a, k, a.size() - 1);
    for(int j = 0; j< b.size(); j++){
        cout<<b.at(j)<<",";
    }

    return 0;
}