#include "fct.h"
#include <stdio.h>
#include <stdlib.h>

typedef int Data;

typedef struct Node{
	int val;
	struct Node *next;
}Node;

void addAtBeginning(Node **head, Data v)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->val = v;
	newNode->next = *head;
	*head = newNode;
}

void addAtEnd(Node** head, Data v)
{
	Node *aux=*head;
	Node* newNode = (Node*)malloc(sizeof(Node)); 
	newNode->val = v; 
	if (*head == NULL) addAtBeginning(&*head, v);
	else{  
		while (aux->next!=NULL) aux = aux->next;
		aux->next = newNode;  
		newNode->next = NULL; 
	}
}

void display(Node *head)
{
	while (head!=NULL){
		printf ("%d ", head->val);
		head=head->next;
	}
	printf("\n");
}

///vom adauga noua fct

void addWherever(Node** head, int k, int v)
{
	int i;
	Node *aux=*head;
	Node* newNode = (Node*)malloc(sizeof(Node)); 
	newNode->val = v; 
	for(i=0;i<5;i++)
	{
		if(i==(k-2)) 
			{
				newNode->next = aux->next;
				aux->next = newNode; 
			}
		else aux=aux->next;
	}
	
}
