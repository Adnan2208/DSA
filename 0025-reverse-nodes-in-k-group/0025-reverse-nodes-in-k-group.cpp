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

    ListNode* reverse(ListNode* &head){
        ListNode* current = head;
        ListNode* prev = nullptr;

        while(current != nullptr){
            ListNode* nextNode = current -> next;
            current -> next = prev;
            prev = current;
            current = nextNode;
        }
        return prev;
    }

    ListNode* getKthNode(ListNode* head,int k){
        int count = 1;
        while(head != nullptr && count < k){
            head = head -> next;
            count++;
        }

        if(count == k) return head;
        return nullptr;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == nullptr || k <= 1 || head -> next == nullptr) return head;

        bool isFirst = true;

        ListNode* current = head;
        ListNode* prevGroupTail = nullptr;

        while(current != nullptr){
            ListNode* KthNode = getKthNode(current,k);

            if(KthNode){
                ListNode* nextNode = KthNode -> next;
                KthNode -> next = nullptr;

                ListNode* reversedHead = reverse(current);
                if(isFirst){
                    head = reversedHead;
                    isFirst = false;
                }else{
                    prevGroupTail -> next = reversedHead;
                }

                prevGroupTail = current;
                prevGroupTail -> next = nextNode;
                current = nextNode;
            }
            else{
                current = nullptr;
            }
        }

        return head;
    }
};