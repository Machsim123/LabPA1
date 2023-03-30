#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char Data;

typedef struct Queue{
	Data val;
	struct Queue *front;
	struct Queue *rear;
	struct Queue *next;
	
}Queue;
Queue *createQueue();

void enQueue();

Data deQueue();

int isEmpty();

void deleteQueue();

void inversare();
