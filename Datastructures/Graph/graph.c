#include "graph.h"

#include <stdio.h>
#include <stdlib.h>

Graph graph_initialize(int size) {
    int* vertices = malloc(sizeof(int) * size);
    int* adjacency_matrix = malloc(sizeof(int) * size * size);

    if (vertices == NULL || adjacency_matrix == NULL) {
        printf("graph_initialize: Failed to allocate data");
        return (Graph) {};
    }

    return (Graph) {vertices, size, adjacency_matrix};
}

void graph_free(Graph* g) {
    free(g->vertices);
    free(g->adjacency_matrix);
    g->vertices = NULL;
    g->adjacency_matrix = NULL;
}

int get_edge(Graph g, int u, int v) {
    return g.adjacency_matrix[u*g.size + v];
}

void set_edge(Graph* g, int u, int v, int w) {
    (g->adjacency_matrix)[u*g->size + v] = w;
}
