#include <iostream>
#include <vector>
#include <queue>

using namespace std;

//	Que 1
//	Breadth-First Search (BFS) is a graph traversal algorithm that explores 
//all nodes at the current level before moving to the next level. It is useful 
//for finding the shortest path in an unweighted graph.
	
//Que 2
// Graph class
class Graph {
    int V; // Number of vertices
    vector<vector<int>> adjList; // Adjacency List

public:
    // Constructor
    Graph(int vertices) {
        V = vertices;
        adjList.resize(V);
    }

    // Add edge between two nodes
    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u); // Since it's an undirected graph
    }

    // BFS Traversal
    void BFS(int start) {
        vector<bool> visited(V, false); // To track visited nodes
        queue<int> q; // Queue for BFS

        // Start BFS from the given node
        visited[start] = true;
        q.push(start);

        cout << "BFS Traversal: ";
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            cout << node << " ";

            // Visit all adjacent nodes
            for (int neighbor : adjList[node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        cout << endl;
    }
};

int main() {
    Graph g(7); // Graph with 7 nodes (0 to 6)

    // Adding edges
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(2, 5);
    g.addEdge(3, 6);

    // Perform BFS starting from node 1
    g.BFS(1);

    return 0;
}
