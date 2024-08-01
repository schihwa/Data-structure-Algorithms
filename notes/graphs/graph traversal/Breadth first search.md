### Breadth-First Search (BFS) - Reference Guide

#### Overview
Breadth-First Search (BFS) traverses a graph level by level, visiting nodes in increasing order of their distance from the starting node. BFS is useful for calculating shortest paths in unweighted graphs and exploring nodes in layers.

#### Algorithm Description
1. **Starting Point**: Begin at a starting node.
2. **Level-by-Level Traversal**: Explore all nodes at the current distance before moving to nodes at the next distance level.
3. **Queue Utilization**: Use a queue to manage nodes to be processed in the order they are discovered.
4. **Visited and Distance Tracking**: Track visited nodes and their distances from the starting node.

**Example:**
https://youtu.be/HZ5YTanv5QE?si=k1q_3j8UGOByFlnp

**Figure 7.14** illustrates the BFS traversal through these steps.

#### Implementation
BFS can be implemented using a queue to keep track of nodes to visit. The following example demonstrates BFS in C++.

**Code Example:**

```cpp
#include <vector>
#include <queue>

const int N = 100; // Adjust as needed
std::vector<int> adj[N]; // Adjacency list
bool visited[N]; // Visited nodes tracker
int distance[N]; // Distance from the starting node

void bfs(int x) {
    std::queue<int> q; // Queue for BFS
    visited[x] = true; // Mark the starting node as visited
    distance[x] = 0; // Distance to the starting node is 0
    q.push(x); // Add the starting node to the queue

    while (!q.empty()) {
        int s = q.front(); q.pop(); // Get the node from the front of the queue
        // Process node s (e.g., print or store node value)
        for (auto u : adj[s]) {
            if (visited[u]) continue; // Skip if already visited
            visited[u] = true; // Mark node as visited
            distance[u] = distance[s] + 1; // Update distance
            q.push(u); // Add the node to the queue
        }
    }
}
```

#### Complexity
- **Time Complexity**: \(O(n + m)\)
  - \(n\) = number of nodes
  - \(m\) = number of edges
- BFS processes each node and edge once, resulting in linear time complexity.

#### Pros and Cons

**Pros:**
- **Shortest Path**: Guarantees the shortest path in unweighted graphs.
- **Layered Exploration**: Useful for problems involving levels or distances.
- **Systematic**: Ensures all nodes at the current distance level are processed before moving to the next.

**Cons:**
- **Memory Usage**: Can consume more memory due to the queue, especially in large graphs with wide branching.
- **Implementation Complexity**: More complex than DFS due to the need for a queue and distance tracking.
- **Not Suitable for Weighted Graphs**: Does not handle weighted edges; algorithms like Dijkstra’s are better for that purpose.

This guide provides a concise overview of BFS, including its implementation and practical considerations.