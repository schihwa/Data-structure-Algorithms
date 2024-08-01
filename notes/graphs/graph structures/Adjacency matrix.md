An adjacency matrix is a way to represent a graph using a 2D array. Each element in the array indicates whether there is an edge (connection) between two nodes.

### Unweighted Graph

**Definition**:
- `1` indicates there is an edge.
- `0` indicates there is no edge.

**Example**:
Consider a graph with 4 nodes (A, B, C, D):

```
   A
   |
   B--C
    \ |
     D
```

**Adjacency Matrix**:

```
    A B C D
  A 0 1 0 0
  B 1 0 1 1
  C 0 1 0 1
  D 0 1 1 0
```

### Weighted Graph

**Definition**:
- Matrix contains the weights of the edges.

**Example**:
Consider a weighted graph with nodes A, B, C, D:

```
   A
  (5)
   |
   B--(7)--C
   |    (6)
  (2)     |
   D--(5)--C
```

**Adjacency Matrix**:

```
    A B C D
  A 0 5 0 0
  B 5 0 7 2
  C 0 7 0 5
  D 0 2 5 0
```

### Sparse Graph

For a graph with many nodes but few edges:

```
  A       C
   \     /
    B   D
```

**Adjacency Matrix**:

```
    A B C D
  A 0 1 0 0
  B 1 0 0 0
  C 0 0 0 1
  D 0 0 1 0
```

This matrix is mostly zeros, showing that not all nodes are connected, highlighting the inefficiency of using an adjacency matrix for sparse graphs.

### Conclusion

Adjacency matrices are a straightforward way to represent graphs, especially when edge-checking needs to be quick. However, their space inefficiency for large, sparse graphs often leads to the use of other representations, like adjacency lists, in practical applications.

### Pros and Cons

**Pros**:
- **Easy to implement and understand**: Just a 2D array.
- **Efficient edge checks**: Checking if an edge exists between any two nodes is O(1).

**Cons**:
- **Space complexity**: Requires O(n^2) space, which can be excessive for large graphs, especially if the graph is sparse (many 0s).
