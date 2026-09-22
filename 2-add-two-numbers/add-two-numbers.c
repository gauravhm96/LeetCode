/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) 
{
    struct ListNode dummy;
    dummy.next = NULL;
    
    struct ListNode* tail = &dummy;
    int carry = 0;

    while(l1 != NULL || l2 != NULL || carry != 0)
    {
        int x = 0;
        int y = 0;

        if(l1 != NULL)
        {
            x = l1->val;
            l1 = l1->next;
        }

        if(l2 != NULL)
        {
            y = l2->val;
            l2 = l2->next;
        }

        int sum = x + y + carry;
        carry = sum/10;

        struct ListNode *curr = malloc(sizeof(struct ListNode));
        
        curr->val = sum%10;
        curr->next = NULL;
        tail->next = curr;
        tail = curr;
    }
    return dummy.next;
}