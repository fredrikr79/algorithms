#ifndef GRAPH_H
#define GRAPH_H

/**
 * @brief Mathematical graph structure
 * 
 * A graph datastructure with vertices of int value and edges defined
 * by an adjacency matrix.
 */
typedef struct Graph {
    /** Pointer to the first element of an array of the vertices' values */
    int* vertices;
    /** Number of vertices in the graph */
    int size;
    /** Pointer to the first element of a flat array describing the adjacency
     * matrix of the graph 
     */
    int* adjacency_matrix;
} Graph;


/*
 * Allocate memory for the arrays
 */
Graph graph_initialize(int size);

/*
 * Free the allocated memory for the arrays
 */
void graph_free(Graph* g);

/**
 * Get the vertex from row u and column v of the adjacency matrix.
 *
 * @param g The properly initialized graph struct
 * @param u Row value, between 0 inclusive and g.size exclusive
 * @param v Column value, between 0 and g.size exclusive
 */
int get_edge(Graph g, int u, int v);

/**
 * Set the vertex from row u and column v of the adjacency matrix to w.
 *
 * @param g The properly initialized graph struct
 * @param u Row value, between 0 inclusive and g.size exclusive
 * @param v Column value, between 0 and g.size exclusive
 * @param w The weight of the edge
 */
void set_edge(Graph* g, int u, int v, int w);

#endif
