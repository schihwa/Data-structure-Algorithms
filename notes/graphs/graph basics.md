
## Graph Structure

### Nodes (Vertices)
Nodes, or vertices, are the fundamental units of a graph. They are often represented by integers 1, 2, ..., n.

### Edges
Edges are the connections between nodes. For example, a graph with 5 nodes and 7 edges might look like this:

```
   1---2
   |   |
   3---4
   |   |
   5---6
```

## Paths and Cycles

### Path
A path is a sequence of nodes connected by edges. For instance, a path from node 1 to node 5 might look like this:

```
1---2---3---4---5
```

### Cycle
A cycle is a path where the first and last nodes are the same. For example, a cycle of three nodes might be represented as:

```
  1
 / \
2---3
```

## Graph Connectivity

### Connected Graph
A connected graph has a path between any two nodes. Here's an example of a connected graph (left) and a disconnected graph (right):

Connected Graph:
```
1---2---3
|   |
4---5
```

Disconnected Graph:
```
1---2   3---4
```

### Components
Components are the connected parts of a graph. A graph with three components might look like:

```
1---2    3---4    5---6
```

## Special Types of Graphs

### Tree
A tree is a connected graph without cycles. For example:

```
   1
  / \
 2   3
 |
 4
```

### Directed Graph
In a directed graph, edges have a direction. For instance:

```
1 -> 2 -> 3
^    |
|    v
4 <- 5
```

### Weighted Graph
A weighted graph has edges with weights. For instance:

```
  (1)---2---(2)
   |        /
  3|      4
   |    /
  (3)---(4)
```
Where the numbers on the edges represent weights.

## Node Properties

### Neighbors (Adjacent Nodes)
Neighbors are nodes connected directly by an edge. For node 1 in the following graph, neighbors are 2 and 4:

```
 1
/ \
2   4
 \
  3
```

### Degree
The degree of a node is the number of its neighbors. For example, in the graph:

```
   1
  / \
 2   3
```

- Node 1 has a degree of 2
- Node 2 has a degree of 1
- Node 3 has a degree of 1

### Indegree and Outdegree (for Directed Graphs)
For a directed graph:

```
1 -> 2
^    |
|    v
3 <- 4
```

- Indegree of node 2: 1 (from node 1)
- Outdegree of node 1: 1 (to node 2)

## Special Graph Properties

### Sum of Degrees
The sum of the degrees of all nodes in a graph is always \(2m\), where \(m\) is the number of edges. For the graph:

```
 1---2
 |   |
 3---4
```

- Node degrees: 2, 2, 2, 2
- Total degree sum = 2+2+2+2 = 8, and there are 4 edges.

### Regular Graph
A regular graph is one where every node has the same degree. For example:

```
 1---2
 |   |
 4---3
```

In this 4-node graph, each node has a degree of 2.

### Complete Graph
In a complete graph, every node is connected to every other node. For instance:

```
1---2
|\ /|
| X |
|/ \|
3---4
```

Here, each node is connected to every other node.

## Bipartite Graph

### Bipartite Graph
A bipartite graph can be colored with two colors such that no adjacent nodes share the same color. For instance:

```
 1---2
 |   |
 3---4
```

In this example, nodes can be colored such that no two adjacent nodes share the same color.

