// Given an array of integers, return indices of the two numbers such that they add up to a specific target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// Example:

// Given nums = [2, 7, 11, 15], target = 9,

// Because nums[0] + nums[1] = 2 + 7 = 9,
// return [0, 1].


#include<bits/stdc++.h>
using namespace std; 

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> imap;
    
//     The C++ function std::map::find() finds an element associated with key k.

// If operation succeeds then methods returns iterator pointing to the element otherwise it returns an iterator pointing the map::end()
    for (int i = 0;; ++i) {
        auto it = imap.find(target - nums[i]);
        // cout<<imap.find(target - nums[i]);
        if (it != imap.end()) {
            cout<<it->first<<"wow";
            cout<<it->second<<"lol";
            return vector<int> {i, it->second};
        }
        
        imap[nums[i]] = i;
    }
}
  
int main() 
{ 
    vector<int> a = {2, 7, 11, 15};
    int t = 9;
    vector<int> b = twoSum(a, t);
    for(int i = 0; i< b.size(); i++){
       cout<<b.at(i);
    }
    return 0; 
} 