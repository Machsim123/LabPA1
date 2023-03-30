#include "cozii.h"
#include "stivee_2.h"

int main()
{
	Queue *q, *v, *p, *head;
	q=createQueue();
	v=createQueue();
	p=createQueue();
	q->val="q";
	v->val="v";
	p->val="p";
	q->rear=v;
	v->front=q;
	v->rear=p;
	p->front=v;
	head=q;
	inversare(q);
	do
	{
      printf("%d ",head->val);
	}while(!isEmpty(head));
	return 0;
	
}
