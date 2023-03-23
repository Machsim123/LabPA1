#include "fct.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int val;
	struct Node *next;
}Node;


int main()
{
	int i, k, v;
	Node *l, *head;
	l=(Node *)calloc(5,sizeof(Node));
	printf("Introduceti timpii pentru prima fct: ");
	scanf("%d",&(l[0].val));
	head=l;
	for(i=1;i<5;i++)
	{
		l[i-1].next=&(l[i]);
		printf("Introduceti timpul pt fct %d: ",i);
		scanf("%d",&(l[i].val));
		l[i].val+=l[i-1].val;
	}
	display(head);
	printf("Introduceti k<5: ");
	scanf("%d",&k);
	printf("Introduceti val dorita: ");
	scanf("%d",&v);
	if(k==1) addAtBeginning(&head,v);
	else addWherever(&head,k,v);
	display(head);
	return 0;
}
