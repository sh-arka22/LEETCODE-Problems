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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        ListNode* itr = head;
        ListNode* tail = dummy;
        
        while(itr){
            if(itr->val == 0) itr = itr->next;
            if(itr == NULL)
                break;
            int sum = 0;
            while(itr->val != 0){
                sum += itr->val;
                itr = itr->next;
            }
            tail->next = new ListNode(sum);
            tail = tail->next;
        }
        return dummy->next;
    }
};