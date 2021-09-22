class Solution
{
    public:
    struct node *reverse (struct node * &head, int k)
    { 
    struct node *prevptr = NULL;
    struct node *currptr = head;
    struct node *nextptr;
    int count = 0;
    while (count < k and nextptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if (nextptr != NULL)
    {
        head->next = reverse(nextptr, k);
    }
    return prevptr;
    }
};
