/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) 
{
    struct ListNode dummy;
    struct ListNode* tail = &dummy;
    dummy.next = head;

    if(head == NULL)
    {
        return NULL;
    }

    while(head !=NULL)
    {
        if(head->val != val)
        {
            tail->next = head;
            tail = head;
        }
        head = head->next;
    }
    tail->next = NULL;
    return dummy.next;
}