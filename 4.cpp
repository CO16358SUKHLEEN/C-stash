#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> arr = {1,2,3,4,5,6,7};
  vector<int> temp(arr.size(), 0);
//   temp.reserve(arr.size());
  for(int i = arr.size() - 1; i>= 0; i--){
      if(i+1 > arr.size() - 1)
      temp.at(0) = arr.at(i);
    // cout<<i;
      else{
          temp.at(i+1) = arr.at(i);
        // cout<<endl<<i;
      }
  }

   for (int i = 0; i < temp.size(); i++)
    {
        cout << temp.at(i);
    }


    return 0;
}