// C++ program to print Vertical
// Zig-Zag traversal of tree
#include <bits/stdc++.h>
using namespace std;

const int sz = 1e5;
int maxLevel = 0;

// Adjacency list representation
// of the tree
vector<int> tree[sz + 1];

// Boolean array to mark all the
// vertices which are visited
bool vis[sz + 1];

// Integer array to store the level
// of each node
int level[sz + 1];

// Array of vector where ith index
// stores all the nodes at level i
vector<int> nodes[sz + 1];

// Utility function to create an
// edge between two vertices
void addEdge(int a, int b)
{

	// Add a to b's list
	tree[a].push_back(b);

	// Add b to a's list
	tree[b].push_back(a);
}

// Modified Breadth-First Function
void bfs(int node)
{

	// Create a queue of {child, parent}
	queue<pair<int, int> > qu;

	// Push root node in the front of
	// the queue and mark as visited
	qu.push({ node, 0 });
	nodes[0].push_back(node);
	vis[node] = true;
	level[1] = 0;

	while (!qu.empty()) {

		pair<int, int> p = qu.front();

		// Dequeue a vertex from queue
		qu.pop();
		vis[p.first] = true;

		// Get all adjacent vertices of the dequeued
		// vertex s. If any adjacent has not
		// been visited then enqueue it
		for (int child : tree[p.first]) {

			if (!vis[child]) {

				qu.push({ child, p.first });
				level[child] = level[p.first] + 1;
				maxLevel = max(maxLevel, level[child]);
				nodes[level[child]].push_back(child);
			}
		}
	}
}

// Utility Function to display the pattern
void display()
{
	bool flag = true;

	// Pointers for the first and the last levels
	int p1 = 0, p2 = maxLevel;

	// i points to the last node of level
	// p1 and j points to the first
	// node of the level p2
	int i = nodes[p1].size() - 1, j = 0;

	// While there are nodes left to traverse
	while (p1 <= p2) {

		// Print the nodes in an alternate fashion
		if (flag) {

			// Print the last unvisited node
			// of the level p1
			cout << nodes[p1][i] << " ";

			// Move to the previous node
			i--;

			// If there are no nodes left then
			// move to the next level
			if (i < 0) {
				p1++;
				i = nodes[p1].size() - 1;
			}
		}
		else {

			// Print the first unvisited node
			// of the level p2
			cout << nodes[p2][j] << " ";

			// Move to the next node
			j++;

			// If there are no nodes left then
			// move to the previous level
			if (j >= nodes[p2].size()) {
				p2--;
				j = 0;
			}
		}

		// Change the flag
		flag = !flag;

		// If all the nodes have been traversed
		if (p1 >= p2 && i < j) {
			break;
		}
	}
}

// Driver code
int main()
{

	// Number of vertices
	int n = 8;

	addEdge(1, 2);
	addEdge(1, 3);
	addEdge(2, 4);
	addEdge(3, 5);
	addEdge(3, 6);
	addEdge(4, 7);
	addEdge(6, 8);

	// Calling modified bfs function
	bfs(1);

	display();

	return 0;
}
