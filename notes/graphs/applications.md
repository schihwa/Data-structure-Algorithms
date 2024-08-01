## 7.2.3 Applications

Using graph traversal algorithms, such as depth-first search (DFS) and breadth-first search (BFS), we can check various properties of graphs. In practice, DFS is often preferred for its ease of implementation. The following sections describe key applications of these algorithms for undirected graphs.

### Connectivity Check

A graph is **connected** if there is a path between any two nodes. To check if a graph is connected:

1. Start at an arbitrary node.
2. Use DFS (or BFS) to traverse the graph.
3. If all nodes are reachable from the starting node, the graph is connected.
4. If some nodes are not reachable, the graph is not connected.

To find all connected components of a graph:

1. Iterate through all nodes.
2. For each node not yet included in a component, start a new DFS.
3. Each DFS will identify one connected component.

### Cycle Detection

A graph contains a **cycle** if, during a traversal, we encounter a node whose neighbor (other than the node's previous node) has already been visited. To detect cycles:

1. Perform DFS on the graph.
2. During the traversal, check if any visited node has an unvisited neighbor that is not the immediate predecessor.

*Alternative Method*: Calculate the number of nodes (c) and edges in each component. If a component with c nodes has c or more edges, it contains a cycle. If it has exactly c − 1 edges, it is a tree with no cycles.

### Bipartiteness Check

A graph is **bipartite** if its nodes can be colored using two colors such that no two adjacent nodes share the same color. To check bipartiteness:

1. Choose two colors, X and Y.
2. Start coloring the graph with X for the starting node, Y for its neighbors, X for their neighbors, and so on.
3. If you find two adjacent nodes with the same color, the graph is not bipartite.
4. If you can color the entire graph without such conflicts, the graph is bipartite.

*Example*: In the given figure (Fig. 7.17), a DFS from node 1 shows that nodes 2 and 5 would require the same color, but they are adjacent, indicating the graph is not bipartite.

**Note**: Checking if a graph can be colored with k colors (where k > 2) so that no adjacent nodes share the same color is NP-hard even for k = 3.

