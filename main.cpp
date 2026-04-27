#include <iostream>
#include "Graph.h"
using namespace std;

int main()
{
    int vertices;
    int edges;
    int source;
    int destination;
    int startVertex;

    cout << "Enter number of vertices: ";
    cin >> vertices;

    Graph graph(vertices);

    cout << "Enter number of edges: ";
    cin >> edges;

    for (int i = 1; i <= edges; i++)
    {
        cout << "Enter source vertex for edge " << i << ": ";
        cin >> source;

        cout << "Enter destination vertex for edge " << i << ": ";
        cin >> destination;

        graph.addEdge(source, destination);
    }

    graph.printGraph();

    cout << "\nEnter starting vertex for DFS: ";
    cin >> startVertex;

    graph.depthFirstTraversal(startVertex);

    return 0;
}
