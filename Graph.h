#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
using namespace std;

class Graph
{
private:
    int vertices;
    vector<vector<int>> adjList;

    // Recursive helper function for depth first traversal
    void DFS(int vertex, vector<bool>& visited);

public:
    Graph(int v);

    void addEdge(int source, int destination);
    void printGraph() const;
    void depthFirstTraversal(int startVertex);
};

#endif
