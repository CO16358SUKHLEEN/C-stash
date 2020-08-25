//Print left rotation of array in O(n) time and O(1) space
#include<bits/stdc++.h>
using namespace std;


int main(){

     vector<int> a = {1, 3, 5, 7, 9};
     vector<int> l;
     int k = 4;
     int y;
     if(k>a.size()){
        y = k%a.size();
     }else{
         y = k;
     }
     int m = 0;
     for(int i = 1; i<=y; i++){
        a.insert(a.end(), a.begin(), a.begin()+1);
        a.erase(a.begin());
     }
   

     for(int i = 0; i< a.size(); i++){
         cout<<a.at(i);
     }

    return 0;
}