#include "Graph.h"
#include <iostream>
using namespace std;

Graph::Graph(int v)
{
    vertices = v;
    adjList.resize(vertices);
}

void Graph::addEdge(int source, int destination)
{
    if (source >= 0 && source < vertices &&
        destination >= 0 && destination < vertices)
    {
        adjList[source].push_back(destination);
        adjList[destination].push_back(source);
    }
    else
    {
        cout << "Invalid edge: " << source << " - " << destination << endl;
    }
}

void Graph::printGraph() const
{
    cout << "\nAdjacency List:" << endl;

    for (int i = 0; i < vertices; i++)
    {
        cout << i << ": ";

        for (int neighbor : adjList[i])
        {
            cout << neighbor << " ";
        }

        cout << endl;
    }
}

void Graph::DFS(int vertex, vector<bool>& visited)
{
    visited[vertex] = true;
    cout << vertex << " ";

    for (int neighbor : adjList[vertex])
    {
        if (!visited[neighbor])
        {
            DFS(neighbor, visited);
        }
    }
}

void Graph::depthFirstTraversal(int startVertex)
{
    if (startVertex < 0 || startVertex >= vertices)
    {
        cout << "Invalid starting vertex." << endl;
        return;
    }

    vector<bool> visited(vertices, false);

    cout << "\nDepth First Traversal starting from vertex "
         << startVertex << ": ";

    DFS(startVertex, visited);

    cout << endl;
}
