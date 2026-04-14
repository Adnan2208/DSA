/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr && l2 == nullptr) return nullptr;

            int carry = 0;

            ListNode* dummy = new ListNode(0);
            ListNode* curr = dummy;

            while(l1 != nullptr || l2 != nullptr){
                int data = 0;
                if(l1 == nullptr){
                    data = 0 + l2 -> val + carry;
                    carry = data / 10;
                }
                else if(l2 == nullptr){
                    data = l1-> val + 0 + carry;
                    carry = data / 10;
                }
                else{
                    data = l1 -> val + l2 -> val + carry;
                    carry = data / 10;
                }

                int trueData = data % 10;
                curr -> next = new ListNode(trueData);

                if(l1) l1 = l1 -> next;
                if(l2) l2 = l2 -> next;
                curr = curr -> next;

                if (carry > 0) {
                    curr->next = new ListNode(carry);
                }
            }
            return dummy -> next;
    }
};