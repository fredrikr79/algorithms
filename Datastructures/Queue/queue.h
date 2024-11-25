#ifndef QUEUE_H
#define QUEUE_H

#include "stdbool.h"

/**
 * @brief Ring-buffer queue implementation
 */
typedef struct Queue {
    int* data;      /** Pointer to start of heap allocation */
    int size;       /** Number of elements allocated in data */
    int head;       /** Index to first element to be dequeued */
    int tail;       /** Index to first free element to be enqueued at */
} Queue;

/**
 * @brief Initialize a queue
 * 
 * @param size: The desired maximum number of elements to store in the queue
 * 
 * Creates and returns a new Queue struct with the desired capacity
 */
Queue queue_initialize(int size);

void queue_free(Queue* q);

bool queue_is_empty(Queue q);

void enqueue(Queue* q, int x);

int dequeue(Queue* q);


#endif
