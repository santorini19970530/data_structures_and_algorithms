#ifndef GRAPH_HPP
#define GRAPH_HPP

#include "Vertex.hpp"
#include "Edge.hpp"

class Graph {
    public:
      std::vector<Vertex *> vlist;
      Graph();
      void addVertex(std::string);
      Vertex *getVertex(std::string);
      void addEdge(std::string, std::string, int);
      Edge *getEdge(std::string, std::string);
      Graph *MST();
      int MSTCost();
      Graph *SP(std::string, std::string);
      int SPCost(std::string, std::string);
};

#endif
