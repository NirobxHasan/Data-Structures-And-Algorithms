#include <iostream>
#include "graphtype.h"

using namespace std;

int main()
{
    GraphType <char> graph(8);

    graph.AddVertex('A');
    graph.AddVertex('B');
    graph.AddVertex('C');
    graph.AddVertex('D');
    graph.AddVertex('E');
    graph.AddVertex('F');
    graph.AddVertex('G');
    graph.AddVertex('H');

    graph.AddEdge('F','H', 1);
    graph.AddEdge('H','E', 1);
    graph.AddEdge('D','E', 1);
    graph.AddEdge('D','G', 1);
    graph.AddEdge('G','F', 1);
    graph.AddEdge('D','A', 1);
    graph.AddEdge('A','D', 1);
    graph.AddEdge('A','B', 1);
    graph.AddEdge('A','C', 1);
    graph.AddEdge('B','A', 1);

    int x = graph.OutDegree('D');
    cout << "\nThe out Degree of D is "<<x;

    if(graph.FoundEdge('A', 'D')) cout<<"\n\nThere is an edge.";
    else cout<<"\n\nThere is no edge.";

    if(graph.FoundEdge('B', 'D')) cout<<"\n\nThere is an edge.";
    else cout<<"\n\nThere is no edge.";

    cout <<"\n\n";
    graph.DepthFirstSearch('B','E');
    graph.DepthFirstSearch('E','B');
    graph.BreadthFirstSearch('B','E');
    graph.BreadthFirstSearch('E','B');
}
