#include <stdio.h>
#include <stdlib.h>

typedef char Data;

typedef struct Node
{
	Data val;
	struct Node *next;
}Node;

Data top(Node *top){
	if (isEmpty(top)) return INT_MIN;
	return top->val;
} 

void push(Node**top, Data v) {
	Node* newNode=(Node*)malloc(sizeof(Node));
	newNode->val=v;
	newNode->next=*top;
	*top=newNode;
}

Data pop(Node**top) {
	if (isEmpty(*top)) return INT_MIN;
	Node *temp=(*top); 		
	Data aux=temp->val;	
	*top=(*top)->next;      		
	free(temp);
	return aux;
}

int isEmpty(Node*top){
	return top==NULL;
}
	
void deleteStack(Node**top){ 
	Node  *temp;
	while (!isEmpty(*top))
		{temp=*top;
		*top=(*top)->next;
		free(temp);}
	}

int verif(Data v[])
{
	int i=0;
	Node *stiva=NULL;
	while(v[i]!=NULL)
	{
	  if(v[i]=="(") 
	  {
	   push(stiva,i+48);
      }
      else if(v[i]==")")
      {
      	deleteStack(stiva);
	  }
	  i++;
	  
	}
	if (stiva!=NULL) 
		return stiva->val;
	else return -1;
}
