Node *removeDuplicates(Node *root)
{
 Node *curr = root;
 while(curr->next!=NULL){
    if((curr->data)==(curr->next->data)){
        Node *temp = curr->next;
        curr->next = curr->next->next;
        delete(temp);
    }else{
        curr = curr->next;
    }
 }
 return root;
}







