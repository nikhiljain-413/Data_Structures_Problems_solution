// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Structure to implement hashing to
// stores pairs in map
struct pair_hash {
	template <class T1, class T2>
	std::size_t
	operator()(const std::pair<T1, T2>& pair) const
	{
		return std::hash<T1>()(pair.first)
			^ std::hash<T2>()(pair.second);
	}
};

// DFS memoization
vector<vector<int> > adjMatrix;
typedef std::pair<int, int> pair1;
unordered_map<pair1, int, pair_hash> mp;

// Function to implement DFS Traversal
long DFSUtility(int node, int stops,
				int dst, int cities)
{
	// Base Case
	if (node == dst)
		return 0;

	if (stops < 0) {
		return INT_MAX;
	}

	pair<int, int> key(node, stops);

	// Find value with key in a map
	if (mp.find(key) != mp.end()) {
		return mp[key];
	}

	long ans = INT_MAX;

	// Traverse adjacency matrix of
	// source node
	for (int neighbour = 0;
		neighbour < cities;
		++neighbour) {

		long weight
			= adjMatrix[node][neighbour];

		if (weight > 0) {

			// Recursive DFS call for
			// child node
			long minVal
				= DFSUtility(neighbour,
							stops - 1,
							dst, cities);

			if (minVal + weight > 0)
				ans = min(ans,
						minVal
							+ weight);
		}
	}

	mp[key] = ans;

	// Return ans
	return ans;
}

// Function to find the cheapest price
// from given source to destination
int findCheapestPrice(int cities,
					vector<vector<int> >& flights,
					int src, int dst, int stops)
{

	// Resize Adjacency Matrix
	adjMatrix.resize(cities + 1,
					vector<int>(cities + 1, 0));

	// Traverse flight[][]
	for (auto item : flights) {
		// Create Adjacency Matrix
		adjMatrix[item[0]][item[1]] = item[2];
	}

	// DFS Call to find shortest path
	long ans = DFSUtility(src, stops,
						dst, cities);

	// Return the cost
	return ans >= INT_MAX ? -1 : (int)ans;
	;
}

// Driver Code
int main()
{
	// Input flight : {Source,
	// Destination, Cost}
	vector<vector<int> > flights
		= { { 2, 9, 2 }, { 7, 2, 3 }, { 7, 9, 7 }, { 9, 5, 1 } };

	// vec, n, stops, src, dst
	int stops = INT_MAX;
	int totalCities = 4;
	int sourceCity = 7;
	int destCity = 9;

	// Function Call

	long ans = findCheapestPrice(
		totalCities, flights,
		sourceCity, destCity,
		stops);

	cout << ans;
	return 0;
}
