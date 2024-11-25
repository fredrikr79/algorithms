#include <../Datastructures/Graph/graph.h>
#include <../Datastructures/Queue/queue.h>

#include <stdbool.h>

int bfs(Graph* g, int size, int root, int goal) {
    bool explored[size];

    Queue q = queue_initialize(size);
    explored[root] = true;
    enqueue(&q, root);
    while (!queue_is_empty(q)) {
        int u = dequeue(&q);
        if ((g->vertices)[u] == goal) {
            return u;
        }
        for (int v = 0; v < g->size; v++) {
            int w = get_edge(*g, u, v);
            if (w > 0 && !explored[v]) {
                explored[v] = true;
                // v.parent = u
                set_edge(g, u, v, 1);
                enqueue(&q, v);
            }
        }
    }

}

int main() {

    return 1;
}
