

typedef char Data;

typedef struct Node{
	Data val;
	struct Node *next;
}Node;

typedef struct Queue{
	Data val;
	struct Queue *front;
	struct Queue *rear;
	
}Queue;

Queue* createQueue(){
	Queue *q;
	q=(Queue *)malloc(sizeof(Queue));
	if (q==NULL) 
	     return NULL;
	q->front=q->rear=NULL;
	return q;	
}

 void enQueue(Queue*q, Data v){
	Node* newNode=(Node*)malloc(sizeof(Node));
	newNode->val=v;
	newNode->next=NULL;
	if (q->rear==NULL) q->rear=newNode; 
	else{
		(q->rear)->next=newNode;
		(q->rear)=newNode;
	}
	if (q->front==NULL) q->front=q->rear; 
}
 
Data deQueue(Queue*q) {  
	Node* aux; Data d;
	if (isEmpty(q)) return INT_MIN;
	
	aux=q->front; 
	d=aux->val;
	q->front=(q->front)->next;
	free(aux);
	return d;  	
} 

int isEmpty_cozi(Queue*q){
	return (q->front==NULL);
}

void deleteQueue(Queue*q){
	Node* aux;
	while (!isEmpty(q)){
		aux=q->front;
		q->front=q->front->next;
		free(aux);
	}
	free(q);
}

void inversare(Queue **q)
{
	Queue *aux=*q;
	Queue *head=aux;
	Node stiva;
	do
	{
		push(stiva,aux->val+48);
		aux=aux->front;
	}while(!isEmpty(aux));
	do
	{
		head->val=aux->val;
		head=head->front;
		deleteStack(stiva);
	}while(!isEmpty(head));
}
