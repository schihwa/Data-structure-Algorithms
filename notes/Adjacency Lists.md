In the adjacency list representation, each node \( x \) of the graph is assigned an adjacency list that consists of nodes to which there is an edge from \( x \). Adjacency lists are the most popular way to represent graphs, and most algorithms can be efficiently implemented using them.

### Unweighted Graph

**Definition**:
- Each node has a list of nodes it is connected to.

**Example**:
Consider a graph with 4 nodes (1, 2, 3, 4):

```
1 --> 2
2 --> 3, 4
3 --> 4
4 --> 1
```

**Adjacency List Representation**:

```cpp
vector<int> adj[N];
adj[1].push_back(2);
adj[2].push_back(3);
adj[2].push_back(4);
adj[3].push_back(4);
adj[4].push_back(1);
```

### Undirected Graph

For an undirected graph, each edge is added in both directions.

**Example**:
Consider an undirected graph with 4 nodes (1, 2, 3, 4):

```
1 -- 2
2 -- 3, 4
3 -- 4
```

**Adjacency List Representation**:

```cpp
vector<int> adj[N];
adj[1].push_back(2);
adj[2].push_back(1);
adj[2].push_back(3);
adj[3].push_back(2);
adj[2].push_back(4);
adj[4].push_back(2);
adj[3].push_back(4);
adj[4].push_back(3);
```

### Weighted Graph

**Definition**:
- Each node has a list of pairs (node, weight) it is connected to.

**Example**:
Consider a weighted graph with nodes 1, 2, 3, 4:

```
1 --(5)--> 2
2 --(7)--> 3
2 --(6)--> 4
3 --(5)--> 4
4 --(2)--> 1
```

**Adjacency List Representation**:

```cpp
vector<pair<int, int>> adj[N];
adj[1].push_back({2, 5});
adj[2].push_back({3, 7});
adj[2].push_back({4, 6});
adj[3].push_back({4, 5});
adj[4].push_back({1, 2});
```

### Traversing Adjacency Lists

Using adjacency lists, we can efficiently find the nodes to which we can move from a given node through an edge. For example, the following loop goes through all nodes to which we can move from node `s`:

```cpp
for (auto u : adj[s]) {
    // process node u
}
```

### Pros and Cons

**Pros**:
- **Space-efficient**: Only stores edges that exist, using O(V + E) space.
- **Flexible**: Easily handles dynamic changes to the graph (adding/removing edges).

**Cons**:
- **Edge-checking**: Checking if there is an edge between two nodes is O(V) in the worst case.
- **Less direct access**: Not as straightforward as an adjacency matrix for checking specific edges quickly.
