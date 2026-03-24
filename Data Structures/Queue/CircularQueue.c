#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct MYQ {
    int front, rear;
    int qarr[MAX];
}*Queue;

int isFull(Queue Q) {
    return (Q->rear + 1) % MAX == Q->front;
}

int isEmpty(Queue Q) {
    return Q->front == -1;
}

void enqueue(Queue Q, int element) {
    if (isFull(Q)) {
        printf("Queue Overflow: Cannot enqueue, the queue is full.\n");
    }
    else {
        if(isEmpty(Q)) {
            Q->front = 0;
        }
        Q->rear = (Q->rear + 1) % MAX;
        Q->qarr[Q->rear] = element;
        printf("Enqueued: %d\n",element); 
    }
}

int dequeue(Queue Q) {
    if (isEmpty(Q)) {
        printf("Queue Underflow: Cannot dequeue, the queue is empty.\n");
        return -1;
    }
    int element = Q->qarr[Q->front];
    if (Q->front == Q->rear) {
        Q->front = Q->rear = -1;
    } 
    else {
        Q->front = (Q->front + 1) % MAX;
    }
    printf("Dequeued: %d\n", element);
    return element;
}

void display(Queue Q) {
    if (isEmpty(Q)) {
        printf("The queue is empty.\n");
        return;
    }
    int i = Q->front; 
    printf("The elements are: \n");
    do
    {
        printf("%d ", Q->qarr[i]);
        i = (i + 1) % MAX;
    } while (i != (Q->rear + 1) % MAX);
    
    printf("\n");
}

