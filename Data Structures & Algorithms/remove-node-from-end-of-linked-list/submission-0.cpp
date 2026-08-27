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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // ListNode dummy(0);
        // ListNode* tmp = &dummy;
        // tmp > next = head;
        ListNode dummy(0, head);
        ListNode* slow = &dummy;
        ListNode* fast = &dummy;
        // if(head -> next == nullptr){
        //     return nullptr;
        // }
        /*
        如果 head == nullptr，head->next 會 runtime error。
        dummy node 本來就是為了統一處理「刪除 head」，包含 [5], n = 1。
        */ 
        for(int i = 0; i < n; i++){
            fast = fast -> next;
        }

        while(fast -> next != nullptr){
            slow = slow -> next;
            fast = fast -> next;
        }
        slow -> next = slow -> next -> next;

        return dummy.next;
    }
};
