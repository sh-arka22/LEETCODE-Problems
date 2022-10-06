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
    ListNode* reverseList(ListNode* head){
    	if(head == nullptr or head->next == nullptr) return head;
    	ListNode *prev = nullptr, *curr = head, *forw = curr->next;

    	while(curr != nullptr){
    		forw = curr->next;
    		curr->next = prev;
    		prev = curr;
    		curr = forw;
    	}
    	return prev;
    }
    ListNode* middleNode(ListNode* head) {
    ListNode *slow = head, *fast = head;
    while(fast->next != NULL and fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
public:
    bool isPalindrome(ListNode* head) {
        ListNode* c1 = head;
        ListNode *l2 = middleNode(head);
        ListNode *nHead = l2->next;
        l2->next = nullptr;
        ListNode * c2 = reverseList(nHead);
        while(c2 != NULL){
            if(c1->val != c2->val) return false;
            c1 = c1->next;
            c2 = c2->next;
        }
        return true;
    }
};