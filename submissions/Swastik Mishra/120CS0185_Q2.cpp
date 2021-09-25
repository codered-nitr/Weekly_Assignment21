//spliting a circular linked list to two circular linked list
void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    int size = 1;
  struct Node *i = head;
  while(i->next != head){
    size++;
    i=i->next;
  }
  i=head;
  for (int x=1;x<(size+1)/2;x++){
    i=i->next;
  }
  struct Node *temp_head=i->next;
  i->next=head;
  *head1_ref= head;
  i=temp_head;
  while (i->next != head){
    i= i->next;
  }
  i->next=temp_head;

  *head2_ref = temp_head;

}
