#include "graph.h"
Graph::Graph()
{
    for (int i = 0; i < Vertex; i++)
    {
        for (int j = 0; j < Vertex; j++)
        {
            if (i == j)
            {
                Save_v[i][j] = 0;
            }
            else
            {
                Save_v[i][j] = infinite; //两点之间无限远
            }
        }
    }
    Edge_Num = 0;
    head = new List;
};

Graph::~Graph(){};