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
    ListNode* sortList(ListNode* head) {
        if(head == nullptr) return nullptr;

        vector<int> arr;
        ListNode* current = head;

        while(current != nullptr){
            arr.push_back(current -> val);
            current = current -> next;
        }
        sort(arr.begin(),arr.end());

        ListNode* sortedHead = new ListNode(-1);
        ListNode* sortedCurr = sortedHead;

        for(int i = 0; i<arr.size(); i++){
            sortedCurr -> next = new ListNode(arr[i]);
            sortedCurr = sortedCurr -> next;
        }

        return sortedHead -> next;
    }
};