#include "listee.h"
#include <stdio.h>
#include <stdlib.h>

typedef int Data;

typedef struct Node{
	Data val;
	struct Node *next;
}Node;

int main()
{
	Node *l,*head;
	int n, i;
	printf("Introduceti nr. de elemente din lista: ");
	scanf("%d",&n);
	l=(Node *)calloc(n,sizeof(Node));
	printf("Introduceti primul elem: ");
	scanf("%d",&(l[0].val));
	
	head=l;
	for(i=1;i<n;i++)
	{
		l[i-1].next=&(l[i]);
		printf("Introduceti elem %d: ",i);
	    scanf("%d",&(l[i].val));
	}
	l[i-1].next=NULL;
	display(head);
	addAtEnd(&head,2);
	display(head);
	addAtBeginning(&head,2);
	display(head);
	return 0;
	
}
