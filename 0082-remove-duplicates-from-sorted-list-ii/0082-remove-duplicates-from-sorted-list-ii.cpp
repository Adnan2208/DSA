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
    ListNode* deleteDuplicates(ListNode* head) {
        map<int,int> umpp;
        ListNode* current = head;
        
        while(current != nullptr){
            umpp[current -> val]++;
            current = current -> next;
        }

        ListNode* newhead = new ListNode(0);
        ListNode* ans = newhead;

        for(auto it: umpp){
            if(it.second == 1){
                newhead -> next = new ListNode(it.first);
                newhead = newhead -> next;
            }
        }
        return ans -> next;
    }
};