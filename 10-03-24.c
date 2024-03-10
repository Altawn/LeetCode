struct ListNode* middleNode(struct ListNode* head) 
{
    struct ListNode* dummy = head;
    int taille = 0;

    while(dummy->next != NULL)
    {
        dummy = dummy->next;
        taille++;        
    }    

    if(taille%2 != 0)
    {
        for(int i = 0 ; i < (taille+1)/2 ; i++)
            head = head->next;
    }
    else
    {
        for(int i = 0 ; i < taille/2 ; i++)
            head = head->next;
    }

    return head;
}
