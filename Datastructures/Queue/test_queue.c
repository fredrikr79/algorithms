#include "stdio.h"
#include "queue.h"

int main() {
    Queue q = queue_initialize(4);
    enqueue(&q, 6);
    enqueue(&q, 8);
    enqueue(&q, -12);
    enqueue(&q, -64290);
    enqueue(&q, 1);
    enqueue(&q, 2);
    printf("Expected:\n1 2 -12 -64290 1 2 -12 -64290\nOutput:\n");
    printf("%d ", dequeue(&q));
    printf("%d ", dequeue(&q));
    printf("%d ", dequeue(&q));
    printf("%d ", dequeue(&q));
    printf("%d ", dequeue(&q));
    printf("%d ", dequeue(&q));
    printf("%d ", dequeue(&q));
    printf("%d\n", dequeue(&q));

    queue_free(q);

    return 1;
}