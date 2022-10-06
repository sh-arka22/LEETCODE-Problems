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
    ListNode* mid(ListNode* head){
        if(head==NULL or head->next==NULL) return head;
        ListNode *curr = head;
        ListNode *fast = curr, *slow = curr;

        while(fast->next != NULL and fast->next->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    ListNode* reverse(ListNode* head){
        if(head==NULL or head->next==NULL) return head;
        ListNode *prev = NULL, *curr = head;
        while(curr != NULL){
            ListNode *forw = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forw;
        }
        return prev;
    }
public:
    void reorderList(ListNode* head) {
        ListNode* midNode = mid(head);
        ListNode* nHead = midNode->next;
        midNode->next = NULL;
        nHead = reverse(nHead);

        ListNode *c1 = head, *c2 = nHead, *f1 = NULL, *f2 = NULL;
        while(c1 != NULL && c2 != NULL){
            f1 = c1->next, f2 = c2->next;
            c1->next = c2;
            c2->next = f1;
            c1 = f1, c2 = f2;
        }
    }
};