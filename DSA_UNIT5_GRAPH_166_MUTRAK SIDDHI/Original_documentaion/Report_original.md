
# Unit 5: Graph

## 1. Title

**Computer Network Connectivity Using Graph and BFS**

## 2. Problem Statement

Develop a C++ program to represent computers and network links as a graph. Record the number of computers reachable from a selected source using BFS. Remove a selected network link to simulate link failure and apply BFS again to determine which computers remain reachable and which become unreachable.

## 3. Objectives

1. To represent computers and network links using a graph data structure.
2. To implement an adjacency list for storing network connections.
3. To use Breadth-First Search (BFS) to identify computers reachable from a selected source computer.
4. To count the number of reachable computers in the network.
5. To simulate network link failure by removing a selected connection between two computers.
6. To perform BFS again after link failure to determine the remaining reachable computers.
7. To identify unreachable computers and analyze the impact of network link failure.
8. To understand graph traversal and its application in computer network connectivity.

## 4. Algorithm

1. Start.
2. Create a graph with n computers using an adjacency list.
3. Add links between computers and validate the computer numbers.
4. Select the source computer.
5. Perform BFS traversal from the source computer:
   - Mark the source computer as visited.
   - Insert the source computer into the queue.
   - Remove a computer from the queue and count it as reachable.
   - Visit all its unvisited neighbors and insert them into the queue.
   - Repeat until the queue becomes empty.
6. Display the reachable computers and their total count.
7. Check whether all computers are reachable from the source computer.
8. Select a network link and remove it from the graph to simulate link failure.
9. Perform BFS again from the same source computer.
10. Display the reachable computers and their count after link failure.
11. Identify unreachable computers and analyze the impact of link failure.
12. Stop.

## 5. Flowchart


              +------------------+
              |      START       |
              +------------------+
                       |
                       v
          +--------------------------+
          | Initialize Network Graph |
          +--------------------------+
                       |
                       v
          +--------------------------+
          | Add Links Between       |
          | Computers               |
          +--------------------------+
                       |
                       v
          +--------------------------+
          | Select Source Computer  |
          +--------------------------+
                       |
                       v
          +--------------------------+
          | Perform BFS Traversal    |
          +--------------------------+
                       |
                       v
          +--------------------------+
          | Display Reachable       |
          | Computers and Count     |
          +--------------------------+
                       |
                       v
          +--------------------------+
          | Remove Link Between     |
          | Computers 3 and 4       |
          +--------------------------+
                       |
                       v
          +--------------------------+
          | Perform BFS Again       |
          +--------------------------+
                       |
                       v
          +--------------------------+
          | Display Reachable       |
          | Computers After Failure |
          +--------------------------+
                       |
                       v
              +------------------+
              |       STOP       |
              +------------------+
              
```
```
## 6. Conclusion

Thus, the computer network was represented using a graph and an adjacency list. Breadth-First Search (BFS) was used to identify and count reachable computers from a selected source. After removing the link between computers 3 and 4, BFS was performed again. As a result, computers 4 and 5 became unreachable from source computer 0. Hence, the program demonstrates the effect of network link failure on computer network connectivity.
