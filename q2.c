int* greater_seedling (struct ListNode*head){
	struct ListNode*outer_node=head,*inner_node=NULL;
	int *a,count=0;
	while(outer_node!=NULL){
		count++;
		outer_node=outer_node->next;
	}
	outer_node=head;
	i=0;
	a=(int*)calloc(count,sizeof(int));
	while(outer_node->next!=NULL){
		inner_node=outer_node->next;
		while(inner_node!=NULL){
			if(outer_node->val<inner_node->val){
				a[i]=inner_node->val;
				break;
			}
			inner_node=inner_node->next;
		}
		i++;
		outer_node=outer_node->next;
	}
	return a;
}