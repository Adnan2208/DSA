class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr) return nullptr;

        ListNode* current = head;
        ListNode* prev = nullptr;

        while(current != nullptr){
            ListNode* front = current -> next;
            current -> next = prev;
            prev = current;
            current = front;
        }
        return prev;
    }
};