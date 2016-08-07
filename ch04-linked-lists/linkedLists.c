#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node * next;
} NodeT;

void printList(NodeT * head){
	NodeT * current = head;
	while(current != NULL){
		printf("%d\n",current->data);
		current = current -> next;	
	}
}

NodeT* createList(){
	NodeT *head=NULL;
	head = malloc(sizeof(NodeT));
	head->data=10;
	head->next=NULL;
	
	NodeT *second;	
	second = malloc(sizeof(NodeT));
	second->data=20;
	second->next=NULL;
	
	head->next = second;
	return(head);

}
int main(){
	NodeT* head = createList();
	printList(head);
	return 0;
}

