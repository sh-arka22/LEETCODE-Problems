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
        ListNode*dummy = new ListNode(-1);
        ListNode *c1 = list1, *c2 = list2, *prev = dummy;

        while(c1 != NULL and c2 != NULL) {
            if(c1->val<c2->val){
                prev->next = c1;
                prev = prev->next;
                c1 = c1->next;
            }
            else{
                prev->next = c2;
                prev = prev->next;
                c2 = c2->next;
            }
        }
        prev->next = c1!= NULL ? c1 : c2;
        return dummy->next;
    }
};