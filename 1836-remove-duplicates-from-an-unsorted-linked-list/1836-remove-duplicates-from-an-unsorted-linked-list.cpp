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
    unordered_map<int,int>cnt;
    ListNode* deleteDuplicatesUnsorted(ListNode* head) {
        for (auto itr = head; itr; itr = itr->next) cnt[itr->val]++;
        
        ListNode *dummy = new ListNode(-1);
        ListNode* itr = head;
        ListNode* tail = dummy;
        while(itr){
            if(cnt[itr->val] == 1){
                tail->next = new ListNode(itr->val);
                tail = tail->next;
            }
            itr = itr->next;
        }
        return dummy->next;
    }
};