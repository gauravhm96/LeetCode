/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) 
{
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    struct ListNode* curr = head;

    while(fast !=NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    struct ListNode *prev = NULL;
    curr     = slow;
    struct ListNode *Nxt = NULL;

    while(curr !=NULL)
    {
        Nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Nxt;
    }

    struct ListNode* left = head;
    struct ListNode* right = prev;

    while(right != NULL)
    {
        if(left->val != right->val)
        {
            return false;
        }
        else
        {
            left = left->next;
            right = right->next;
        }
    }
    return true;

}