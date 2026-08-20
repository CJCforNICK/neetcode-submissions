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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;

        ListNode* n1 = list1;
        ListNode* n2 = list2;
        while(n1 != nullptr && n2 != nullptr){
            if(n1->val <= n2->val){
                tail->next = n1;
                n1 = n1->next;
            }else{
                tail->next = n2;
                n2 = n2->next;
            }
            tail = tail->next;
        }
        if(n1 != nullptr){
            tail->next = n1;
        }else{
            tail->next = n2;
        }

        return dummy.next;
    }
};
