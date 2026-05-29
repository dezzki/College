
---

# EXAM REVISION CHEATSHEET: ALGORITHM DESIGN AND ANALYSIS

## UNIT 1 – Searching, Sorting, Selection

### Topic 1 – Sorting Algorithms & Analysis

**Cheatsheet:**

- **Core Concepts:**
    - **Stable Sort:** Maintains relative order of equal elements (Insertion, Merge, Bubble, Counting, Radix).
    - **In-Place Sort:** Requires only $O(1)$ extra space (Insertion, Quick, Heap, Bubble). Not in-place: Merge, Counting, Radix.
- **Formulae / Algorithms:**
    - Lower bound for comparison sorts: $\Omega(n \log n)$ derived from Decision Tree height $h \ge \log_2(n!)$.
    - Counting Sort: Non-comparison sort, time $O(n+k)$.
- **Solving Framework:**
    - _To prove stability:_ Trace algorithm with duplicate elements (e.g., $4_a, 4_b$). If $4_a$ stays before $4_b$, it is stable.
    - _Intermediate Sort for Radix:_ MUST be stable. You cannot use Heap Sort (unstable). You must use Counting or Insertion sort.
- **Patterns:**
    - **Bucket Sort Trap:** Worst-case $O(n^2)$ occurs when input is NOT uniformly distributed (all elements fall into one bucket and are sorted via insertion sort). Fix: Use Merge Sort for individual buckets to guarantee $O(n \log n)$.
- **Revision Points:**
    - Almost-sorted input best cases: Insertion Sort ($O(n)$).
    - Heap Sort is in-place but NOT stable. Merge Sort is stable but NOT in-place.

### Topic 2 – Priority Queues, Heaps & Selection

**Cheatsheet:**

- **Core Concepts:** Max-Heap (parent $\ge$ children). Min-Heap (parent $\le$ children).
- **Formulae / Algorithms:**
    - $d$-ary heap children indices (0-based): $d \times i + 1$ to $d \times i + d$.
    - Array leaves in $n$-element heap: $\lfloor n/2 \rfloor + 1$ to $n$.
- **Solving Framework:**
    - _Find Min in Max-Heap:_ Min must be a leaf. Search all leaves ($\lceil n/2 \rceil$ elements). Time = $O(n)$.
    - _TargetSum via Heap:_ HeapSort array ($O(n \log n)$), then for each element, Binary Search for the complement ($n \times O(\log n)$) = Total $O(n \log n)$.
- **Patterns:**
    - **Randomized Select Worst-Case:** $O(n^2)$ when the pivot chosen is consistently the maximum/minimum element (e.g., array already sorted and last element chosen).
- **Revision Points:**
    - Median-of-Medians guarantees $O(n)$ worst-case selection by forcing a good pivot.
    - Extract-Max on Heap = $O(\log n)$. Sorted Array = $O(1)$.
    - Increase-Key on Heap = $O(\log n)$. Sorted Array = $O(n)$ (requires shifting).

### Topic 3 – Red-Black Trees & Binary Search Trees

**Cheatsheet:**

- **Core Concepts:** RB-Trees are self-balancing BSTs guaranteeing $O(\log n)$ height.
- **Key Definitions (RB Rules):**
    1. Root is Black.
    2. Red nodes cannot have Red children.
    3. All paths from node to leaves contain the same number of Black nodes.
- **Solving Framework:**
    - _Comparison:_ RB-Tree search/insert = $O(\log n)$ worst-case. Standard BST search/insert = $O(n)$ worst-case (if skewed).
    - _Traversals:_ Inorder/Preorder/Postorder take $O(n)$ for BOTH trees.
- **Patterns:**
    - "Can a black node have no siblings?" **Yes.**
    - "Can a red node have no siblings?" **Yes.** (As long as black-height is preserved).
- **Revision Points:**
    - Mapping to Processor Scheduling: Use RB-Tree to store job execution limits. Searching for feasible slots is bounded by $O(\log n)$.

---

## UNIT 2 – Graphs

### Topic 1 – Graph Representations & Traversals (BFS/DFS)

**Cheatsheet:**

- **Core Concepts:**
    - Adjacency Matrix space: $O(V^2)$.
    - Adjacency List space: $O(V+E)$. Best for sparse graphs.
- **Solving Framework:**
    - _BFS vs DFS for Shortest Path:_ **BFS** finds shortest paths in _unweighted_ graphs. **DFS** cannot.
    - _Dijkstra vs BFS:_ Dijkstra is for arbitrary positive weights. BFS fails here because it assumes edge weight = 1.
    - _Indegree from Outgoing Adj List:_ Create an array of size $V$ initialized to 0. Traverse all outgoing lists; for every target node seen, increment its array index. Time = $O(V+E)$.
- **Patterns:**
    - $T_B$ (BFS Tree) and $T_D$ (DFS Tree) are typically different unless the graph is a straight line.
- **Revision Points:**
    - A single-component directed graph can yield a DFS tree of just 1 node if that starting node has no outgoing edges.

### Topic 2 – Cyclic Graphs, Bipartite Graphs & Topological Sorting

**Cheatsheet:**

- **Core Concepts:** Bipartite graph = No odd-length cycles. Topological Sort = Linear ordering of DAG.
- **Formulae / Algorithms:**
    - Cycle Detection: DFS (look for back-edges).
    - Bipartite Checking: BFS (color layers 0/1. If cross-edge connects same layer, NOT bipartite). Time = $O(V+E)$.
- **Solving Framework:**
    - _Topological Sorting:_ Find node with in-degree 0, output it, remove its edges. Repeat.
    - _Strongly Connected Components (SCC):_ Intersecting SCCs $G_x$ and $G_y$ sharing a node $u$ must be identical ($G_x = G_y$).
- **Patterns:**
    - Cycle graphs $C_n$ are bipartite ONLY if $n$ is even.
    - Graphs with cycles (e.g., $K_4$) have **zero** topological orderings.
- **Revision Points:**
    - Any directed graph with a topological ordering MUST be acyclic (DAG).

---

## UNIT 3 – Divide and Conquer

### Topic 1 – Recurrence Relations & Master Theorem

**Cheatsheet:**

- **Core Concepts:** $T(n) = aT(n/b) + f(n)$. $G(n)$ = Divide cost, $F(n)$ = Combine cost.
- **Formulae / Algorithms:**
    - Merge Sort: $G(n) = O(1)$, $F(n) = O(n)$.
    - Quicksort: $G(n) = O(n)$, $F(n) = O(1)$.
- **Solving Framework (Writing Recurrences):**
    - _Ternary Search:_ $T(n) = T(n/3) + O(1) \implies O(\log_3 n)$.
    - _Recursive Insertion Sort:_ $T(n) = T(n-1) + O(n) \implies O(n^2)$.
    - _2n/3 and n/3 Split:_ $T(n) = T(2n/3) + T(n/3) + O(n) \implies O(n \log n)$.
- **Revision Points:**
    - Master Theorem cases compare $f(n)$ against $n^{\log_b a}$.

### Topic 2 – Divide & Conquer Sorting & Applications

**Cheatsheet:**

- **Formulae / Algorithms:**
    - _Strassen’s Matrix Mult:_ 7 multiplications instead of 8 $\implies O(n^{\log_2 7})$.
    - _Simultaneous Min/Max:_ Compare elements in pairs ($n/2$), then compare winners for max and losers for min ($n/2 + n/2$). Total comparisons = $3\lfloor n/2 \rfloor$.
- **Solving Framework:**
    - _Worst-case Merge step:_ Occurs when elements strictly alternate between the two arrays (e.g., $A={1,3,5}, B={2,4,6}$). Total comparisons = $n-1$.
    - _Quicksort modified depth:_ Using iterative module for larger subarray forces recursion depth to bound at $O(\log n)$ for stack space optimization.
- **Patterns:**
    - _Input of all identical elements:_ Quicksort = $O(n^2)$ (if no 3-way partition). Merge Sort = $O(n \log n)$. Heap Sort = $O(n)$ (Heapify is $O(1)$).
- **Revision Points:**
    - Using $O(n)$ median-finding to pick Quicksort pivot guarantees $T(n) = 2T(n/2) + O(n) \implies O(n \log n)$ worst-case.

---

## UNIT 4 – Greedy algorithms

### Topic 1 – Minimum Spanning Trees (Prim's & Kruskal's)

**Cheatsheet:**

- **Core Concepts:** Cut Property: The minimum weight edge crossing any cut belongs to the MST.
- **Solving Framework:**
    - _MST Uniqueness:_ If edge weights are NOT distinct, MST is NOT unique.
    - _Weight Modification:_
        - $c_e^2$: Order of edges remains the same. MST **does not change**.
        - $1 - c_e$: Relative order reverses. MST **changes** (becomes Maximum Spanning Tree).
- **Patterns:**
    - Showing Cut Property on graph: Draw a line splitting nodes, pick the smallest edge crossing the line.
    - If a graph has 2 edge-disjoint spanning trees, adding an edge from one to the other guarantees a cycle (every pair of nodes forms part of a cycle).
- **Revision Points:**
    - Prim's vs Kruskal's can yield different trees on the same graph if there are duplicate edge weights and ties are broken differently.

### Topic 2 – Shortest Path & Knapsack/Scheduling (Greedy)

**Cheatsheet:**

- **Core Concepts:**
    - _Fractional Knapsack:_ Greedy works (sort by Value/Weight).
    - _0-1 Knapsack:_ Greedy FAILS. Use DP.
- **Formulae / Algorithms:**
    - _Interval Scheduling:_ Sort by **Earliest Finish Time**.
- **Solving Framework:**
    - _Dijkstra & Negative Edges:_ Dijkstra FAILS on negative weights because it assumes once a node is extracted from PQ, its shortest path is final.
    - _Squaring edge costs for Dijkstra:_ Shortest path **MAY CHANGE**. Squaring heavily penalizes paths with multiple edges, even if their original sum was lower.
- **Patterns:**
    - _Interval Scheduling Counter-examples:_ "Fewest incompatibilities" fails (blocks optimal disjoint intervals).
    - _Minimizing Lateness:_ All optimal schedules with no idle time and no inversions have the _exact same_ maximum lateness.
- **Revision Points:**
    - "Start last" is a valid greedy strategy for Interval Scheduling (it is the exact symmetric opposite of "Finish first").

---

## UNIT 5 – Dynamic Programming

### Topic 1 – Knapsack & Subset Sum

**Cheatsheet:**

- **Core Concepts:** Overlapping subproblems, Optimal Substructure.
- **Formulae / Algorithms:**
    - _0-1 Knapsack Recurrence:_ If $w < w_i$, $OPT(i, w) = OPT(i-1, w)$. Else, $OPT(i, w) = \max(OPT(i-1, w), v_i + OPT(i-1, w - w_i))$.
- **Solving Framework:**
    - _Subset Sum:_ Becomes equivalent to 0-1 Knapsack if $v_i = w_i$ for all items.
    - _Recursive vs DP:_ Pure recursion takes exponential $O(2^n)$ time due to recomputing identical subproblems. DP / Memoization caches answers $\implies O(n \cdot W)$ polynomial time.
- **Patterns:**
    - Sub-optimal solution to a subproblem? **No**. Optimal solutions _must_ contain optimal sub-solutions (Optimal Substructure property).
- **Revision Points:**
    - To trace Subset sum/Knapsack: Create a table where rows = items, columns = capacities up to $W$.

### Topic 2 – Interval Scheduling & Subarrays

**Cheatsheet:**

- **Formulae / Algorithms:**
    - _Max Contiguous Subarray DP:_ `DP[i] = max(A[i], A[i] + DP[i-1])`
    - _Fibonacci Memoization:_ Store computed `F(n)` in array. Time complexity drops from $O(2^n)$ to $O(n)$.
- **Solving Framework:**
    - _Memoization vs Iteration:_ Memoization (Top-down) solves _fewer_ subproblems if some capacities/intervals are mathematically unreachable. Iteration (Bottom-up) blindly computes _every_ cell in the matrix.
    - _Weighted Interval Scheduling:_ $OPT(j) = \max(v_j + OPT(p(j)), OPT(j-1))$.
- **Patterns:**
    - Always verify if DP applies: check for (1) Optimal Substructure, and (2) Overlapping Subproblems.
- **Revision Points:**
    - $p(j)$ is the index of the rightmost interval that ends before interval $j$ begins.

---

## UNIT 6 – Intractability

### Topic 1 – P, NP, NP-Completeness & Reductions

**Cheatsheet:**

- **Core Concepts:** $Y \le_p X$ means Problem $Y$ poly-time reduces to Problem $X$. Meaning: **$X$ is at least as hard as $Y$**.
- **Solving Framework (True/False Validation):**
    - _Statement:_ "If $Y$ cannot be solved in poly-time, $X$ cannot be solved in poly-time." **CORRECT**.
    - _Statement:_ "Y is at least as hard as X." **INCORRECT**. Correct version: X is at least as hard as Y.
    - _Statement:_ "If X belongs to NP, then X is NP-complete." **INCORRECT**. Correct version: X must belong to NP _and_ be NP-Hard (every problem in NP reduces to X).
- **Revision Points:**
    - If $X$ can be solved in polynomial time, then $Y$ can be solved in polynomial time.

---

## UNIT 7 – Advanced Analysis of Algorithms

### Topic 1 – Amortized Analysis

**Cheatsheet:**

- **Core Concepts:** Aggregate method = Total cost of $n$ operations / $n$. Gives guaranteed average cost per operation.
- **Formulae / Algorithms:**
    - _Stack with Multipop:_ Total pushes over $n$ ops $\le n$. Since an item can only be popped once, total pops $\le n$. Total cost $\le 2n$. Amortized cost = $O(2n)/n = O(1)$.
    - _Stack with Backup:_ Copying $k$ items every $k$ steps costs $O(k)$. Over $n$ operations, total copy cost is $(n/k) \times k = n$. Total cost = $O(n)$. Amortized = $O(1)$.
- **Solving Framework:**
    - _Binary Counter:_ Bit 0 flips $n$ times, Bit 1 flips $n/2$ times... Total flips $= n + n/2 + n/4 ... \le 2n$. Amortized cost = $O(2n)/n = O(1)$.
    - _Power of 2 loop (Cost $i$ if power of 2, else 1):_ Total extra cost = $1 + 2 + 4 + ... + 2^{\log n} \le 2n$. Regular cost = $n$. Total $\le 3n$. Amortized = $O(1)$.
- **Revision Points:**
    - Always sum the absolute worst-case over $n$ steps, then divide by $n$. Do not analyze a single expensive operation in isolation.

---

## MISCELLANEOUS – Fundamentals & Growth of Functions

### Topic 1 – Growth of Functions

**Cheatsheet:**

- **Formulae / Algorithms:**
    - Growth rate order: $O(\log n) < O(n) < O(n \log n) < O(n^2) < O(2^n) < O(n!) < O(n^n)$.
- **Solving Framework (Loop Analysis):**
    - `while i*i <= n`: Limit is $\sqrt{n}$. Time = $O(\sqrt{n})$.
    - `for (j = 1; j <= n; j = 2 * j)`: Multiplies by 2. Time = $O(\log n)$.
    - Nested loop of $n$ and $\log n$ $\implies$ Total time = $O(n \log n)$.
- **Patterns:**
    - Ordering check: $n^2 \log n < 2^{n^2} < n^{2^n} < 2^{2^n}$.
- **Revision Points:**
    - _Naive String Matcher Worst-Case:_ Occurs when Text and Pattern consist of identical repeating characters (e.g., T="AAAAA", P="AAA"). Time = $O(m(n-m+1))$.