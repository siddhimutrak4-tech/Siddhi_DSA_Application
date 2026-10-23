
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class Network {
private:
    int n;
    vector<vector<int> > adj;

    bool validVertex(int u) const {
        return u >= 0 && u < n;
    }

public:
    explicit Network(int computers)
        : n(computers), adj(computers) {}

    // Modification A: Add a new computer (vertex)
    void addComputer() {
        ++n;
        adj.push_back(vector<int>());
        cout << "Computer " << n - 1
             << " added successfully.\n";
    }

    // Modification A: Add a network link (edge)
    void addLink(int u, int v) {
        if (!validVertex(u) || !validVertex(v)
            || u == v) {
            cout << "Invalid computer numbers.\n";
            return;
        }

        if (find(adj[u].begin(), adj[u].end(), v)
            != adj[u].end()) {
            cout << "Link already exists!\n";
            return;
        }

        adj[u].push_back(v);
        adj[v].push_back(u);
        cout << "Link added successfully.\n";
    }

    void removeLink(int u, int v) {
        if (!validVertex(u) || !validVertex(v)
            || u == v) {
            cout << "Invalid computer numbers.\n";
            return;
        }

        if (find(adj[u].begin(), adj[u].end(), v)
            == adj[u].end()) {
            cout << "Link does not exist!\n";
            return;
        }

        adj[u].erase(
            remove(adj[u].begin(), adj[u].end(), v),
            adj[u].end()
        );

        adj[v].erase(
            remove(adj[v].begin(), adj[v].end(), u),
            adj[v].end()
        );

        cout << "Link removed successfully.\n";
    }

    // Modification A: Display the updated graph
    void displayGraph() const {
        cout << "\nUpdated Graph (Adjacency List):\n";

        for (int u = 0; u < n; ++u) {
            cout << u << ": ";

            if (adj[u].empty())
                cout << "(no links)";

            for (size_t i = 0; i < adj[u].size(); ++i) {
                cout << adj[u][i];

                if (i + 1 < adj[u].size())
                    cout << " ";
            }

            cout << '\n';
        }
    }

    // BFS traversal and reachability count
    int BFS(int source) const {
        if (!validVertex(source)) {
            cout << "Invalid source computer.\n";
            return 0;
        }

        vector<bool> visited(n, false);
        queue<int> q;
        vector<int> order;

        visited[source] = true;
        q.push(source);

        while (!q.empty()) {
            int current = q.front();
            q.pop();

            order.push_back(current);

            for (size_t i = 0;
                 i < adj[current].size(); ++i) {
                int neighbor = adj[current][i];

                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }

        cout << "Reachable from computer "
             << source << ": ";

        for (size_t i = 0; i < order.size(); ++i)
            cout << order[i] << " ";

        cout << "\nReachable computer count: "
             << order.size() << " out of " << n << ".\n";

        // Modification C: Handle disconnected computers
        if ((int)order.size() < n) {
            cout << "Warning: Some computers are "
                 << "disconnected or unreachable "
                 << "from this source.\n";
        } else {
            cout << "All computers are reachable "
                 << "from this source.\n";
        }

        return (int)order.size();
    }

    // Modification B and C:
    // Find and display shortest path using BFS
    void shortestPath(int source, int destination) const {
        if (!validVertex(source)
            || !validVertex(destination)) {
            cout << "Invalid source or destination.\n";
            return;
        }

        vector<int> distance(n, -1);
        vector<int> parent(n, -1);
        queue<int> q;

        distance[source] = 0;
        q.push(source);

        while (!q.empty()) {
            int current = q.front();
            q.pop();

            for (size_t i = 0;
                 i < adj[current].size(); ++i) {
                int neighbor = adj[current][i];

                if (distance[neighbor] == -1) {
                    distance[neighbor] =
                        distance[current] + 1;

                    parent[neighbor] = current;
                    q.push(neighbor);
                }
            }
        }

        // Modification C: No path available
        if (distance[destination] == -1) {
            cout << "No path available from computer "
                 << source << " to computer "
                 << destination << ".\n";
            return;
        }

        vector<int> path;

        for (int v = destination;
             v != -1; v = parent[v]) {
            path.push_back(v);
        }

        reverse(path.begin(), path.end());

        cout << "Shortest path ("
             << distance[destination] << " links): ";

        for (size_t i = 0; i < path.size(); ++i) {
            cout << path[i];

            if (i + 1 < path.size())
                cout << " -> ";
        }

        cout << '\n';
    }
};

int main() {
    Network net(6);

    net.addLink(0, 1);
    net.addLink(0, 2);
    net.addLink(1, 3);
    net.addLink(2, 3);
    net.addLink(3, 4);
    net.addLink(4, 5);

    const int source = 0;
    const int destination = 5;

    cout << "\n=== INITIAL NETWORK ===\n";
    net.displayGraph();

    cout << "\nBefore Link Failure:\n";
    net.BFS(source);
    net.shortestPath(source, destination);

    // Simulate a network link failure
    cout << "\n=== REMOVE LINK 3-4 ===\n";
    net.removeLink(3, 4);
    net.displayGraph();

    cout << "\nAfter Link Failure:\n";
    net.BFS(source);
    net.shortestPath(source, destination);

    // Modification A: Add an alternative link
    cout << "\n=== ADD LINK 2-4 ===\n";
    net.addLink(2, 4);
    net.displayGraph();

    // Modification B: Compare updated results
    cout << "\nAfter Adding Link 2-4:\n";
    net.BFS(source);
    net.shortestPath(source, destination);

    // Modification A: Add a new vertex
    cout << "\n=== ADD NEW COMPUTER ===\n";
    net.addComputer();
    net.displayGraph();

    // Modification C: New vertex is disconnected
    net.BFS(source);

    return 0;
}
