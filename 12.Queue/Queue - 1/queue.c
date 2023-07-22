#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 5

typedef struct {
    int arr[MAX_SIZE];
    int size;
    int front;
    int rear;
} Queue;

void initQueue(Queue *q) {
    q->size = MAX_SIZE;
    q->front = q->rear = 0;
}

// enqueue
void enqueue(Queue *q, int data) {
    if (q->rear == q->size) {
        printf("Queue is overflow.\n");
    } else {
        q->arr[q->rear] = data;
        q->rear++;
    }
}

// dequeue
void dequeue(Queue *q) {
    if (q->front == q->rear) {
        printf("Queue is underflow.\n");
    } else {
        q->front++;
        if (q->front == q->rear) {
            q->front = q->rear = 0;
        }
    }
}

// front
int getFront(Queue *q) {
    return q->arr[q->front];
}

// size
int getSize(Queue *q) {
    return q->rear - q->front;
}

// empty
bool isEmpty(Queue *q) {
    return (q->front == q->rear);
}

void print(Queue *q) {
    int i = q->front;
    while (i < q->rear) {
        printf("%d ", q->arr[i]);
        i++;
    }
    printf("\n");
}

int main() {
    Queue q;
    initQueue(&q);

    enqueue(&q, 10);
    dequeue(&q);
    enqueue(&q, 20);
    dequeue(&q);
    enqueue(&q, 30);
    dequeue(&q);
    enqueue(&q, 40);
    dequeue(&q);
    enqueue(&q, 50);
    dequeue(&q);
    enqueue(&q, 60);
    enqueue(&q, 70);

    printf("%d\n", getFront(&q));

    return 0;
}
