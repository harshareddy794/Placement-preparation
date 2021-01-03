int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node *first = head;
       Node *second = head;
       int i = 1;
       int count = 1;
       while((i<n) && (first->next!=NULL)){
           first = first ->next;
           i++;
           count++;
       }
          while((first!=NULL) && (first->next!=NULL)){
           first = first ->next;
           second = second->next;
           count++;
       }
        if(n>count) {
            return -1;
        }     
       return second->data;
}







