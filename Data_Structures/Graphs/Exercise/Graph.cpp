#include <iostream>
#include <queue>
#include <unordered_set>
#include <limits>

#include "Graph.hpp"

Graph::Graph(){
    // no code
}

void Graph::addVertex(std::string name){
    if(getVertex(name) == NULL){
        Vertex* newVertex = new Vertex(name);
        vlist.push_back(newVertex);
    }
}

Vertex *Graph::getVertex(std::string name){
    for (Vertex* v : vlist)
        if (v->name == name)
            return v;

    return NULL;
}

void Graph::addEdge(std::string from, std::string to, int weight){
    Vertex* fromVertex = getVertex(from);
    Vertex* toVertex = getVertex(to);

    if(fromVertex != NULL && toVertex != NULL){
        Edge* newEdge = new Edge(fromVertex, toVertex, weight);
        fromVertex->edges.push_back(newEdge);

        // For undirected graph, also add edge from toVertex to fromVertex
        Edge* backEdge = new Edge(toVertex, fromVertex, weight);
        toVertex->edges.push_back(backEdge);
    }
}

Edge *Graph::getEdge(std::string from, std::string to){
    Vertex* fromVertex = getVertex(from);

    if(fromVertex != NULL)
        for(Edge* edge : fromVertex->edges)
            if (edge->to->name == to)
                return edge;

    return NULL;
}

int Graph::MSTCost(){
    return -1;
}

Graph *Graph::MST(){
    return NULL;
}

int Graph::SPCost(std::string from, std::string to){
    Vertex* startVertex = getVertex(from);
    Vertex* endVertex = getVertex(to);
    
    if(!startVertex || !endVertex)
        return -1;

    std::unordered_map<Vertex*, int> distances;
    std::unordered_map<Vertex*, Vertex*> previous;
    std::unordered_set<Vertex*> visited;
    for(Vertex* v : vlist){
        distances[v] = std::numeric_limits<int>::max(); // Set initial distances to infinity
        previous[v] = NULL; // No previous vertex at the start
    }

    distances[startVertex] = 0; // Distance to the source is 0
    using Pair = std::pair<int, Vertex*>; // Pair of distance and vertex for the priority queue
    std::priority_queue<Pair, std::vector<Pair>, std::greater<Pair>> minHeap;
    minHeap.push({0, startVertex}); // Push initial vertex with distance 0

    while(!minHeap.empty()){
        Vertex* currentVertex = minHeap.top().second;
        minHeap.pop();

        if(visited.count(currentVertex))
            continue;
        visited.insert(currentVertex);

        for(Edge* edge : currentVertex->edges){
            Vertex* neighbor = edge->to;
            if (visited.count(neighbor)) continue;

            int newDist = distances[currentVertex] + edge->weight;

            if(newDist < distances[neighbor]){
                distances[neighbor] = newDist;
                previous[neighbor] = currentVertex;
                minHeap.push({newDist, neighbor}); // Push updated distance
            }
        }
    }

    return (distances[endVertex] != std::numeric_limits<int>::max()) ? 
    distances[endVertex] : 
    -1;
}

Graph *Graph::SP(std::string from, std::string to){
    return NULL;
}
