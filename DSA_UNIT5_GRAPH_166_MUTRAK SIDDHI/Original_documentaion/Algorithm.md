### 3\. Algorithm

1\. Start.

2\. Create a graph with `n` computers using an adjacency list.

3\. Add links between computers and validate the computer numbers.

4\. Select the source computer.

5\. Perform BFS traversal from the source computer:

* Mark the source computer as visited.

* Insert the source computer into the queue.

* Remove a computer from the queue and count it as reachable.

* Visit all its unvisited neighboring computers and insert them into the queue.

* Repeat until the queue becomes empty.

6\. Display the reachable computers and their total count.

7\. Check whether all computers are reachable from the source computer.

8\. Select a network link and remove it from the graph to simulate link failure.

9\. Perform BFS again from the same source computer.

10\. Display the reachable computers and their count after link failure.

11\. Identify which computers have become unreachable and analyze the impact of link failure.

12\. Stop.
