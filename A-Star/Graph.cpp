#include<unordered_map>
#include<list>
#include<string>
#include <iostream>

using namespace std;

class Graph {
	// Adjacency List
	unordered_map<string, list<pair<string, int>>> adjList;

public:
	void addEdge(string x, string y, int cost, bool bidir) {
		adjList[x].push_back(make_pair(y, cost));
		if (bidir) {
			adjList[y].push_back(make_pair(x, cost));
		}
	}

	void printAdjList() {
		// Iterate over each Key Node in the map
		for (auto p : adjList) {
			string keyNode = p.first;
			list<pair<string, int>> adjNodesList = p.second;
			cout << keyNode << " -> ";
			
			// Iterate over each the Adj Node and Cost pair
			for (auto p : adjNodesList) {
				string adjNode = p.first;
				int cost = p.second;
				cout << adjNode << " " << cost << ", ";
			}
			cout << endl;
		}
	}
};
