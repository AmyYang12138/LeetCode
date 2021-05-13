struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* l3=malloc(sizeof(struct ListNode));
    l3->val=0;l3->next=NULL;
    struct ListNode* p=l3;
    while(l1!=NULL && l2!=NULL) {
        struct ListNode* temp=malloc(sizeof(struct ListNode));
        temp->val=0;temp->next=NULL;
        if((l1->val+l2->val+l3->val)>=10) {
            l3->next=temp;
            l3->val=((l1->val+l2->val+l3->val)%10);
            l3->next->val+=1;
        }
        else if(l3!=NULL) {
            l3->val=(l1->val+l2->val+l3->val);
        }
        l1=l1->next; l2=l2->next;
        if(l1!=NULL || l2!=NULL) {
            l3->next=temp;
            l3=l3->next;
        }
    }
    while(l1!=NULL || l2!=NULL){
        struct ListNode* temp=malloc(sizeof(struct ListNode));
        temp->val=0;temp->next=NULL;
        if(l1!=NULL) {
            if((l3->val+l1->val)>=10) {
                l3->next=temp;
                l3->val=(l3->val+l1->val)%10;
                l3->next->val+=1;
            } else {
                l3->val+=l1->val;
            }
            l1=l1->next;
            if(l1!=NULL) {
                l3->next=temp;
                l3=l3->next;
            }
        } else {
            if((l3->val+l2->val)>=10) {
                l3->next=temp;
                l3->val=(l3->val+l2->val)%10;
                l3->next->val+=1;
            } else {
                l3->val+=l2->val;
            }
            l2=l2->next;
            if(l2!=NULL) {
                l3->next=temp;
                l3=l3->next;
            }
        }
    }
    return p;
}
