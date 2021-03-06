 struct ListNode {
      int val;
      struct ListNode *next;
  };

#define NULL 0


struct ListNode* deleteDuplicates(struct ListNode* head)
{
    if (head == NULL)
        return (NULL);
    
    struct ListNode* loop;
    loop = head;
    
    while (loop->next != NULL)
    {
        if (loop->next->val == loop->val)
            loop->next = loop->next->next;
        else
            loop = loop->next;
    }
    return (head);
}