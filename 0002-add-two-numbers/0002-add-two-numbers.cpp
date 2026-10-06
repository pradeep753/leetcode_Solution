class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp = new ListNode();
        ListNode* res = temp;
        int carry =0;
        while(l1 || l2 || carry){
            int target = carry;
            if(l1){
                target += l1->val;
                l1 = l1->next;
            }
            if(l2){
                target += l2->val;
                l2 = l2->next;
            }
            carry = target / 10;
            res->next = new ListNode(target % 10);
            res = res->next;
        }
        return temp->next;
    }
};