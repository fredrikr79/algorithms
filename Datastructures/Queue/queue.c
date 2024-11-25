#include "queue.h"

#include "stdlib.h"
#include <stdio.h>
#include <stdbool.h>

Queue queue_initialize(int size) {
    int* data = malloc(sizeof(int) * size);

    if (data == NULL) {
        printf("queue_initialize: Failed to allocate data");
        return (Queue) {};
    }

    return (Queue) {data, size, 0, 0};
}

void queue_free(Queue* q) {
    free(q->data);
    q->data = NULL;
}

bool queue_is_empty(Queue q) {
    return q.tail == q.head;
}

void enqueue(Queue* q, int x) {
    q->data[q->tail] = x;
    if (q->tail == q->size - 1) {
        q->tail = 0;
    } else {
        q->tail++;
    }
}

int dequeue(Queue* q) {
    int x = q->data[q->head];
    if (q->head == q->size - 1) {
        q->head = 0;
    } else {
        q->head++;
    }
    return x;
}
