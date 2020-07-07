// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

// Example:

// Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
// Output: 7 -> 0 -> 8
// Explanation: 342 + 465 = 807.

// #include<bits/stdc++.h>
// using namespace std;
//  struct node {
//        int data;
//        node* next;
//    };
// int main(){
//      vector<int> a = {2, 4, 3};
//      vector<int> b = {5, 6, 4};
//     for(int i = 0; i < a.size(); i++){
//        node* i = new node();
//        node* j = new node();
//        i->data = a[i];
//        i->next = i++;

//     }

//     return 0;
// }
// Original Link
// https://leetcode.com/problems/add-two-numbers/submissions/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/**
  * Solution 
  * 
  * There are 2 possible approaches 
  * 1) Convert the Linked List representation into an actual number representation (e.g. unsigned long int) and use the low level support for arithmetic then convert it back to Linked List 
  * 2) Implement the arithmetic to work directly on the Linked List representation 
  * The solution relies on this second approach as it is much more efficient 
  */

struct ListNode
{
   int val;
   ListNode *next;
   ListNode() : val(0), next(nullptr) {}
   ListNode(int x) : val(x), next(nullptr) {}
   ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int main()
{

   ListNode *p;
   ListNode(5, p);
   // while()
   return 0;
}
// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
//     {
//         return list_sum(l1, l2);
//     }

//     private:
//     ListNode* list_sum(const ListNode* a, const ListNode* b)
//     {
//         int t_res = a->val + b->val;
//         int r=t_res/10;
//         auto root = new ListNode(t_res%10);
//         auto last = root;
//         a = a->next;
//         b = b->next;

//         while((a != nullptr) || (b != nullptr))
//         {
//             int t_a=0;
//             int t_b=0;

//             if(a!=nullptr)
//             {
//                 t_a = a->val;
//                 a = a->next;
//             }

//             if(b!=nullptr)
//             {
//                 t_b = b->val;
//                 b = b->next;
//             }
//             int t_res = t_a+t_b+r;
//             r = t_res/10;
//             last->next = new ListNode(t_res%10);
//             last = last->next;
//         }
//         if(r>0) last->next = new ListNode(r);

//         return root;
//     }

// };
