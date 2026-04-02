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
        if(head == nullptr) return nullptr;
        if(head -> next == nullptr) return head;
        unordered_map<int,int> umpp;

        ListNode* current = head;
        ListNode* prev = nullptr;
        while(current != nullptr){
            if(umpp.find(current -> val) != umpp.end()){
                prev -> next = current -> next;
                ListNode* temp = current;
                current = current->next;
                delete temp;
                continue;
            }
            umpp[current -> val]++;
            prev = current;
            current = current -> next;
        }
        return head;
    }
};