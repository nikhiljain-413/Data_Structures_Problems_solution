#include <bits/stdc++.h>
#define infi 1000000000
using namespace std;

// Class of the node
class Node {
public:
	int vertexNumber;

	vector<pair<int, int> > children;
	Node(int vertexNumber)
	{
		this->vertexNumber = vertexNumber;
	}


	void add_child(int vNumber, int length)
	{
		pair<int, int> p;
		p.first = vNumber;
		p.second = length;
		children.push_back(p);
	}
};


vector<int> dijkstraDist(
	vector<Node*> g,
	int s, vector<int>& path)
{

	vector<int> dist(g.size());


	bool visited[g.size()];
	for (int i = 0; i < g.size(); i++) {
		visited[i] = false;
		path[i] = -1;
		dist[i] = infi;
	}
	dist[s] = 0;
	path[s] = -1;
	int current = s;

	unordered_set<int> sett;
	while (true) {

		// Mark current as visited
		visited[current] = true;
		for (int i = 0;
			i < g[current]->children.size();
			i++) {
			int v = g[current]->children[i].first;
			if (visited[v])
				continue;

			sett.insert(v);
			int alt
				= dist[current]
				+ g[current]->children[i].second;


			if (alt < dist[v]) {
				dist[v] = alt;
				path[v] = current;
			}
		}
		sett.erase(current);
		if (sett.empty())
			break;

		// The new current
		int minDist = infi;
		int index = 0;


		for (int a: sett) {
			if (dist[a] < minDist) {
				minDist = dist[a];
				index = a;
			}
		}
		current = index;
	}
	return dist;
}

void printPath(vector<int> path,
			int i, int s)
{
	if (i != s) {

		// Condition to check if
		// there is no path between
		// the vertices
		if (path[i] == -1) {
			cout << "Path not found!!";
			return;
		}
		printPath(path, path[i], s);
		cout << path[i] << " ";
	}
}

// Driver Code
int main()
{
	vector<Node*> v;
	int n = 4, s = 0, e = 5;

	// Loop to create the nodes
	for (int i = 0; i < n; i++) {
		Node* a = new Node(i);
		v.push_back(a);
	}


	v[0]->add_child(1, 1);
	v[0]->add_child(2, 4);
	v[1]->add_child(2, 2);
	v[1]->add_child(3, 6);
	v[2]->add_child(3, 3);

	vector<int> path(v.size());
	vector<int> dist
		= dijkstraDist(v, s, path);

	for (int i = 0; i < dist.size(); i++) {
		if (dist[i] == infi) {
			cout << i << " and " << s
				<< " are not connected"
				<< endl;
			continue;
		}
		cout << "Distance of " << i
			<< "th vertex from source vertex "
			<< s << " is: "
			<< dist[i] << endl;
	}
	return 0;
}
