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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == nullptr || head -> next == nullptr || left >= right) return head;

        ListNode* current = head;
        ListNode* prev = nullptr;
        int count = 1;

        while(current != nullptr && count < left){
            prev = current;
            current = current -> next;
            count++;
        }
        
        ListNode* tail = prev;
        ListNode* revEnd = nullptr;

        if(count == left){
            while(count <= right && current != nullptr){
                if(count == left){
                    revEnd = current;
                    prev = current;
                    current = current -> next;
                    count++;
                }
                else{
                    ListNode* nextNode = current -> next;
                    current -> next = prev;
                    prev = current;
                    current = nextNode;
                    count++;
                }
            }
            if(tail) tail -> next = prev;
            else head = prev;
            revEnd -> next = current;
        }
        else{
            return head;
        }

        return head;
    }
};