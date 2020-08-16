//Find the minimum element in a sorted and rotated array

#include<bits/stdc++.h>
using namespace std;
int y(vector<int> a, int low, int high, int mid){
//     int small = mid;
//    if(small )
}
int main(){
    vector<int> a = {12, 16, 5, 7, 9};
    //o(n) time, better to use binary search
    // int m = a.at(0);
    // for(int i = 0; i< a.size(); i++){
    //     if(i<a.size() - 1){
    //         if(m >a.at(i+1)){
    //             m = a.at(i+1);
    //         }
    //     }
    // }
    // cout<<m;
    int low = a.size()/2 - 1;
    int high = a.size()/2 + 1;
    cout<<low<<high;
    int mid = a.size()/2;
    int u = y(a, low, high, mid);
    return 0;
}