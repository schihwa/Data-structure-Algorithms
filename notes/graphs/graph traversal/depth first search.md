### Depth-First Search (DFS) - Reference Guide

#### Overview
Depth-First Search (DFS) is a fundamental graph traversal technique. It explores a graph by following a single path from the starting node until it can no longer proceed, then backtracks to explore other paths.

#### Algorithm Description
1. **Starting Point**: Begin at a starting node.
2. **Traversal**: Move to adjacent nodes that have not been visited.
3. **Backtracking**: Once a node has no unvisited adjacent nodes, return to the previous node to explore other paths.
4. **Visited Tracking**: Keep track of visited nodes to ensure each node is processed only once.

#### Example: https://youtu.be/Urx87-NMm6c?si=4zwLHMDuABXdDH61

**Figure 7.13** illustrates the traversal process through various steps.

#### Implementation
DFS can be effectively implemented using recursion. The following example shows a basic implementation in C++.

**Code Example:**

```cpp
#include <vector>

const int N = 100; // Adjust as needed
std::vector<int> adj[N]; // Adjacency list
bool visited[N]; // Visited nodes tracker

void dfs(int s) {
    if (visited[s]) return; // If already visited, return
    visited[s] = true; // Mark the node as visited
    // Process node s (e.g., print or store node value)
    for (auto u : adj[s]) {
        dfs(u); // Recursively visit adjacent nodes
    }
}
```

#### Complexity
- **Time Complexity**: \(O(n + m)\)
  - \(n\) = number of nodes
  - \(m\) = number of edges
- Each node and edge is processed once, resulting in linear time complexity.

#### Pros and Cons

**Pros:**
- **Simple Implementation**: Easy to implement, particularly with recursion.
- **Memory Efficiency**: Uses less memory than Breadth-First Search (BFS) when exploring large graphs.
- **Path Finding**: Can be used to find a path between nodes or detect cycles in the graph.

**Cons:**
- **Non-Optimal for Shortest Path**: Does not guarantee the shortest path in unweighted graphs; BFS is typically used for that purpose.
- **Stack Overflow Risk**: Recursive implementation can lead to stack overflow for very deep or infinite graphs.
- **Incompleteness in Infinite Graphs**: May not terminate if the graph is infinite or if it contains cycles without proper cycle detection.

