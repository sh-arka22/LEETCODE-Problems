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
private:
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
    ListNode *merge(vector<ListNode*>& lists, int si, int ei){
        if(si>ei) return NULL;
        if(si==ei) return lists[si];
        int mid = (si+ei)/2;
        ListNode *l1 = merge(lists,si,mid);
        ListNode *l2 = merge(lists,mid+1,ei);

        return mergeTwoLists(l1,l2);
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        return merge(lists,0, lists.size()-1);
    }
};