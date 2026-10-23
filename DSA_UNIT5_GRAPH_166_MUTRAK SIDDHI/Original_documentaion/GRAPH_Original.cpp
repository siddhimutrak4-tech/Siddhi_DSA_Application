#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class Network {
private:
    int n;
    vector<vector<int> > adj;

public:
    Network(int computers) {
        n = computers;
        adj.resize(n);
    }

    void addLink(int u, int v) {
        if (u < 0 || u >= n || v < 0 || v >= n || u == v) {
            cout << "Invalid computer numbers!" << endl;
            return;
        }

        if (find(adj[u].begin(), adj[u].end(), v)
            != adj[u].end()) {
            cout << "Link already exists!" << endl;
            return;
        }

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void removeLink(int u, int v) {
        if (u < 0 || u >= n || v < 0 || v >= n) {
            cout << "Invalid computer numbers!" << endl;
            return;
        }

        if (find(adj[u].begin(), adj[u].end(), v)
            == adj[u].end()) {
            cout << "Link does not exist!" << endl;
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

        cout << "Link removed successfully." << endl;
    }

    int BFS(int source) {
        if (source < 0 || source >= n) {
            cout << "Invalid source computer!" << endl;
            return 0;
        }

        vector<bool> visited(n, false);
        queue<int> q;

        visited[source] = true;
        q.push(source);

        int count = 0;

        cout << "Reachable computers: ";

        while (!q.empty()) {
            int current = q.front();
            q.pop();

            cout << current << " ";
            count++;

            for (int i = 0; i < (int)adj[current].size(); i++) {
                int neighbor = adj[current][i];

                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }

        cout << endl;
        cout << "Number of reachable computers: "
             << count << endl;

        if (count < n) {
            cout << "Warning: Some computers are unreachable."
                 << endl;
        } else {
            cout << "All computers are reachable." << endl;
        }

        return count;
    }
};

int main() {
    int n = 6;
    Network net(n);

    net.addLink(0, 1);
    net.addLink(0, 2);
    net.addLink(1, 3);
    net.addLink(2, 3);
    net.addLink(3, 4);
    net.addLink(4, 5);

    int source = 0;

    cout << "=== Before Link Failure ===" << endl;
    net.BFS(source);

    cout << endl;
    cout << "Removing link between computers 3 and 4..."
         << endl;

    net.removeLink(3, 4);

    cout << endl;
    cout << "=== After Link Failure ===" << endl;
    net.BFS(source);

    return 0;
}
