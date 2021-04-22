#include <iostream>

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        return rec_reverse(head);
    }
private:
    ListNode* rec_reverse(ListNode* n, ListNode* rev_head = nullptr){
        if( n == nullptr ){ return rev_head; }
        else{
            ListNode* next = n->next;
            n->next = rev_head;
            return rec_reverse(next, n);
        }
    }
};