// 2. Spend a moment on some external research on using "A* pathfinding" - a very important and useful pathfinding algorithms - in your code.
// 3. Using your research, write an A* implementation that reads coordinates labeled (x,y,cost) where x & y are letters that define a connection,
// and cost is a number that represents the cost. You can use the below information:
// Sample map to traverse: (a,b,5) (b,c,1) (a,d,7) (c,d,1) - Sample path request: (a,d)
// 3. The program should determine if it's possible to reach a destination given the starting point.
// It should also find the cheapest path, making sure to output the cost of the path.

#include <iostream>
#include"Graph.cpp"
using namespace std;

int main()
{
    Graph g;

    g.addEdge("a", "b", 5, true);
    g.addEdge("b", "c", 1, true);
    g.addEdge("a", "d", 7, true);
    g.addEdge("c", "d", 1, true);

    g.printAdjList();
}
