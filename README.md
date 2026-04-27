# Depth-First-Traversal

## Program Description
This C++ program creats a graph and outputs its nodes using **depth first traversal**. The graph is stored using an adjacency list. The program asks the user to enter the number of vertices and edges, then uses DFS to visit and print the nodes. 

Depth first traversal starts at a selected node, visits that node, and then continues as far as possible along each connected path before backtracking. 

## Inputs
The user enters:
- number of vertices
- number of edges
- edge connections
- starting vertex for DFS

## Outputs
The program displays:
- the graph's adjacency list
- the depth first traversal order

## Compile and Run Instructions
**Using g++**

*g++ main.cpp Graph.cpp -o graphDFS*

*./graphDFS*

## Design Documentation
**Detailed Psuedocode**
```
Start

Ask user for number of vertices
Create graph with that number of vertices

Ask user for number of edges

For each edge
    Ask user for source vertex
    Ask user for destination vertex
    Add edge to adjacency list

Ask user for starting vertex

Create visited array and mark all vertices false

Call DFS starting at selected vertex:
    Mark current vertex as visited
    Print current vertex

    For each neighbor of current vertex
        If neighbor has not been visited
            Call DFS on neighbor

Print traversal order

End
```

## UML Class Diagram
<img width="393" height="226" alt="image" src="https://github.com/user-attachments/assets/3476092f-f0e6-4f3e-a6ea-050b24bd4833" />

## Use Case Diagram
<img width="529" height="798" alt="image" src="https://github.com/user-attachments/assets/3e6e0760-ec17-41cc-8865-db949c22ad15" />

## Program Execution Evidence
<img width="393" height="249" alt="image" src="https://github.com/user-attachments/assets/3b705971-59c3-48ba-afe1-4a40c091833c" />
<img width="180" height="127" alt="image" src="https://github.com/user-attachments/assets/ce407f9e-cebd-425a-971a-bea3a0d438f4" />
<img width="560" height="70" alt="image" src="https://github.com/user-attachments/assets/2977c7ff-5351-4a9d-ab75-f20c27d4162d" />

