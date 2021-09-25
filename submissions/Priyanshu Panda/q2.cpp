void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    Node *slow = head;
    Node *fast = head;
     
    if(head == NULL)
        return;
     
    while(fast->next != head and fast->next->next != head)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    
    if(fast->next->next == head)
        fast = fast->next;

    *head1_ref = head;

    if(head->next != head)
        *head2_ref = slow->next;
         
    fast->next = slow->next;
         
    slow->next = head;
}
