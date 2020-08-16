//rearrangging array such that a[i] = i;

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> a = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1};
    int temp;
    for (int i = 0; i < a.size(); i++)
    {
        // int x = a[i];
        //    auto it = find(a.begin(), a.end(), i);
        //    if(it == a.end()){
        //        a[i] = -1;
        //    }
        //    else{
        //        a[i] = i;
        //    }
        if (a[i] > 0 && a[i] != i)
        {
            // temp =  x;
            // x = a[x];
            // a[x] = temp;
            swap(a[i], a[a[i]]);
        }
    }

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << ",";
    }
    return 0;
}

// // C++ program for rearrange an
// array such that arr[i] = i.    swap
// #include<stdio.h>

// int main()
// {
//     int arr[] = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for (int i = 0; i < n;)
//     {
//         if (arr[i] >= 0 && arr[i] != i)
//         arr[arr[i]] = (arr[arr[i]] + arr[i]) -
//                         (arr[i] = arr[arr[i]]);
//         else
//             i++;
//     }
//     for(int i = 0; i < n; i++)
//         printf("%d ",arr[i]);
//         return 0;
// }
