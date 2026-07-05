/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/

class Solution {
public:

    bool checkPalindrome(string s){
        int left = 0;
        int right = s.size()-1;

        while(left < right){
            if(s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }

    bool isPalindrome(ListNode* head) {
        if(head == nullptr) return true;
        if(head -> next == nullptr) return true;
        string s = "";

        ListNode* current = head;
        while(current != nullptr){
            s += (char) current -> val;
            current = current -> next;
        }
        return checkPalindrome(s);
    }
};