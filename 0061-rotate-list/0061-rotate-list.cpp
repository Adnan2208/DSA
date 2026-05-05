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

    int getSizeOfLL(ListNode* head){
        int count = 0;
        while(head != nullptr){
            head = head -> next;
            count++;
        }
        return count;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if(k <= 0 || head == nullptr || head -> next == nullptr) return head;
        
        int size = getSizeOfLL(head);
        k = k % size;
        if(k == 0) return head;


        ListNode* originalHead = head;
        ListNode* current = head;
        int steps = size - k - 1;

        while(steps > 0){
            current = current -> next;
            steps--;
        }

        ListNode* newHead = current -> next;
        current -> next = nullptr;

        ListNode* temp = newHead;

        while(temp -> next != nullptr){
            temp = temp -> next;
        }

        temp -> next = originalHead;
        return newHead;
    }
};