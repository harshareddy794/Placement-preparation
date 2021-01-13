bool isCircular(Node *head)
{
    if(head==NULL){
        return 1;
    }
   Node *curr = head;
   while(curr->next!=head && curr->next!=NULL){
       curr = curr->next;
   }
   if(curr->next==head){
       return 1;
   }else{
       return 0;
   }
}
