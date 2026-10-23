
## 1. Title

**UNIT5:GRAPH**

## 2. Problem Statement

Develop a C++ program to represent computers and network links as an undirected graph. Count the number of computers reachable from a selected source using Breadth-First Search (BFS). Simulate network link failure by removing a selected link and perform BFS again to determine which computers remain reachable. Modify the graph by adding new vertices or edges, compare the reachability and shortest-path results before and after updates, and handle disconnected computers or unavailable paths with appropriate messages.

## 3. Objectives

1. To represent computers and network links using a graph data structure.
2. To implement an adjacency list for storing network connections.
3. To use BFS to identify computers reachable from a selected source computer.
4. To count the number of reachable computers in the network.
5. To simulate network link failure by removing an existing connection.
6. To add new vertices and edges and display the updated graph.
7. To compare BFS reachability counts and shortest paths before and after graph updates.
8. To identify disconnected computers and display an appropriate message when no path is available.
9. To understand the application of graph traversal algorithms in computer network connectivity.

## 4. Algorithm

1. Start.
2. Create a graph with six computers using an adjacency list.
3. Add the initial network links between the computers.
4. Display the initial graph.
5. Select computer 0 as the source and computer 5 as the destination.
6. Perform BFS from the source computer.
7. Display the reachable computers and their total count.
8. Find and display the shortest path from the source to the destination.
9. Remove the link between computers 3 and 4 to simulate network link failure.
10. Display the updated graph and perform BFS again.
11. Check whether the destination is reachable. If no path exists, display an appropriate message.
12. Add a new link between computers 2 and 4 to restore connectivity through an alternative path.
13. Display the updated graph and repeat BFS and shortest-path calculations.
14. Add a new computer to the graph and display the updated adjacency list.
15. Perform BFS again and identify any disconnected computers.
16. Stop.

## 5. Flowchart

```text
              +------------------+
              |      START       |
              +------------------+
                       |
                       v
          +--------------------------+
          | Initialize Graph with   |
          | Six Computers           |
          +--------------------------+
                       |
                       v
          +--------------------------+
          | Add Initial Network     |
          | Links                   |
          +--------------------------+
                       |
                       v
          +--------------------------+
          | Display Initial Graph   |
          +--------------------------+
                       |
                       v
          +--------------------------+
          | Select Source and        |
          | Destination              |
          +--------------------------+
                       |
                       v
          +--------------------------+
          | Perform BFS and Find    |
          | Shortest Path           |
          +--------------------------+
                       |
                       v
          +--------------------------+
          | Remove Link 3-4         |
          | (Simulate Link Failure) |
          +--------------------------+
                       |
                       v
          +--------------------------+
          | Display Updated Graph   |
          +--------------------------+
                       |
                       v
          +--------------------------+
          | Perform BFS and Check   |
          | Path Availability       |
          +--------------------------+
                       |
                       v
          +--------------------------+
          | Add Alternative Link    |
          | Between 2 and 4         |
          +--------------------------+
                       |
                       v
          +--------------------------+
          | Compare Updated BFS and |
          | Shortest-Path Results   |
          +--------------------------+
                       |
                       v
          +--------------------------+
          | Add New Computer        |
          +--------------------------+
                       |
                       v
          +--------------------------+
          | Display Graph and Check |
          | Disconnected Computers  |
          +--------------------------+
                       |
                       v
              +------------------+
              |       STOP       |
              +------------------+
```

## 6. Conclusion

Thus, the computer network was successfully represented using an undirected graph and an adjacency list. BFS was used to determine reachable computers and calculate the shortest path in the unweighted network. After removing the link between computers 3 and 4, some computers became unreachable from the source. Adding an alternative link restored connectivity and changed the shortest path. The program also supports adding new computers and links, displaying the updated graph, and identifying disconnected computers or unavailable paths. Hence, the program demonstrates the effect of network updates and link failures on computer network connectivity.
