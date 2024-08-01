Sure! Here is the reference page with the ASCII representations of the graphs included:

---

## Edge List

An edge list contains all edges of a graph in some order. This is a convenient way to represent a graph if the algorithm processes all its edges, and it is not needed to find edges that start at a given node.

### Unweighted Graph

**Definition**:
- Each pair (a, b) denotes an edge from node \( a \) to node \( b \).

**Example**:
Consider a graph with 4 nodes (1, 2, 3, 4):

```
1 --> 2
2 --> 3
2 --> 4
3 --> 4
4 --> 1
```

**Graph Representation**:
```
  1 --> 2
        |
        v
  4 <-- 3
  ^     |
  |     v
  4 <-- 2
```

**Edge List Representation**:

```cpp
vector<pair<int, int>> edges;
edges.push_back({1, 2});
edges.push_back({2, 3});
edges.push_back({2, 4});
edges.push_back({3, 4});
edges.push_back({4, 1});
```

### Weighted Graph

**Definition**:
- Each element in the list is a tuple (a, b, w), which means that there is an edge from node \( a \) to node \( b \) with weight \( w \).

**Example**:
Consider a weighted graph with nodes 1, 2, 3, 4:

```
1 --(5)--> 2
2 --(7)--> 3
2 --(6)--> 4
3 --(5)--> 4
4 --(2)--> 1
```

**Graph Representation**:
```
  1 --(5)--> 2
         (7)  |
              v
         4<--(6)  3
  ^           (5) |
  |               v
 (2) <--------- 4
```

**Edge List Representation**:

```cpp
vector<tuple<int, int, int>> edges;
edges.push_back({1, 2, 5});
edges.push_back({2, 3, 7});
edges.push_back({2, 4, 6});
edges.push_back({3, 4, 5});
edges.push_back({4, 1, 2});
```

### Pros and Cons

**Pros**:
- **Space-efficient**: Only stores existing edges.
- **Simplicity**: Easy to construct and iterate over all edges.

**Cons**:
- **Edge-checking**: Inefficient for checking the existence of specific edges.
- **No direct access**: Finding all edges starting from a specific node requires scanning the entire list.
